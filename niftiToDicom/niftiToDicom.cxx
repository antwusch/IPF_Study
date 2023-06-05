/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    $RCSfile: niftiToDicom.cxx,v $
  Language:  C++
  Author:    Kaifang Du & Taylor Patton
  Date:      $Date: 2016-09-09 13:45:08 $
  Version:   $Revision: 1.2 $

  Copyright (c) Insight Software Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif

#ifdef __BORLANDC__
#define ITK_LEAN_AND_MEAN
#endif

#include "itkVersion.h"

//#include "itkOrientedImage.h"
#include "itkImage.h" //
#include "itkMinimumMaximumImageFilter.h"

#include "itkGDCMImageIO.h"
#include "itkGDCMSeriesFileNames.h"
#include "itkNumericSeriesFileNames.h"

#include "itkImageFileReader.h"
#include "itkImageSeriesReader.h"
#include "itkImageSeriesWriter.h"

#include "itkResampleImageFilter.h"
#include "itkShiftScaleImageFilter.h"
#include "itkMultiplyImageFilter.h"

#include "itkTranslationTransform.h"
#include "itkLinearInterpolateImageFunction.h"

#include "itkMetaDataObject.h"
#include "itkMultiplyImageFilter.h" //

//#include "gdcm/src/gdcmFile.h"
//#include "gdcm/src/gdcmUtil.h"
#include "itkGDCMImageIO.h"
#include "itkGDCMSeriesFileNames.h"
#include "itkNumericSeriesFileNames.h"
#include "gdcmUIDGenerator.h"
#include "itkMaskImageFilter.h"
#include "itkResampleImageFilter.h"
#include "itkNearestNeighborInterpolateImageFunction.h"



#include <string>
#include <vector>

#include <itksys/SystemTools.hxx>

void CopyDictionary (itk::MetaDataDictionary &fromDict,
                     itk::MetaDataDictionary &toDict);

int main( int argc, char* argv[] )
{

  if( argc < 6 )
    {
    std::cerr << "Usage: " << argv[0];
    std::cerr << "InputImage InputReferenceDicomDirectory OutputDicomDirectory DICOMDescription CTorJac Mask(optional)" 
			  << std::endl;
    return EXIT_FAILURE;
    }
int CT = 0;
if( strcmp(argv[5],("CT")) == 0)
{
	CT = 1;
}
else if ( strcmp(argv[5],("Jac")) == 0)
{ 
CT = 0;
}
else
{

    std::cerr << "Usage: " << argv[0];
    std::cerr << "InputImage InputReferenceDicomDirectory OutputDicomDirectory DICOMDescription CTorJac Mask(optional)" << std::endl; 
std::cerr << "CTorJac should be CT or Jac to specificy range of values CT for -1024 to 1024, Jac for 0 to 3" << std::endl;
    return EXIT_FAILURE;
}

  const unsigned int      InputImageDimension = 3;
  const unsigned int      InputDicomDimension = 3;
  const unsigned int      OutputDicomDimension = 2;
  
  typedef float InputImagePixelType;
  typedef signed short RefDicomPixelType;
  typedef signed short OutputDicomPixelType;
  
  typedef itk::Image< InputImagePixelType, InputImageDimension >
	InputImageType; 
  typedef itk::Image< RefDicomPixelType, InputDicomDimension >
    RefDicomImageType;
  typedef itk::Image< OutputDicomPixelType, OutputDicomDimension >
    OutputDicomImageType;
	
  typedef itk::ImageFileReader< InputImageType >       
	InputImageReaderType;	
  typedef itk::ImageSeriesReader< RefDicomImageType >
    RefDicomReaderType;	
 
  typedef itk::GDCMImageIO                        
	ImageIOType;
  typedef itk::GDCMSeriesFileNames
    InputNamesGeneratorType;  
  typedef itk::NumericSeriesFileNames             
	NamesGeneratorType;
  typedef itk::NumericSeriesFileNames
    OutputNamesGeneratorType;
  
  typedef itk::ShiftScaleImageFilter< InputImageType, InputImageType >
    ShiftScaleType;
  typedef itk::ImageSeriesWriter< InputImageType, OutputDicomImageType >
    SeriesWriterType;

////////////////////////////////////////////////  
// 1) Read the input reference Dicom series

  ImageIOType::Pointer gdcmIO = ImageIOType::New();
  InputNamesGeneratorType::Pointer inputNames = InputNamesGeneratorType::New();
  inputNames->SetInputDirectory( argv[1] );

  const RefDicomReaderType::FileNamesContainer & filenames = 
                            inputNames->GetInputFileNames();

  RefDicomReaderType::Pointer refDicomreader = RefDicomReaderType::New();

  refDicomreader->SetImageIO( gdcmIO );
  refDicomreader->SetFileNames( filenames );
  try
    {
    refDicomreader->Update();
    }
  catch (itk::ExceptionObject &excp)
    {
    std::cerr << "Exception thrown while reading the series" << std::endl;
    std::cerr << excp << std::endl;
    return EXIT_FAILURE;
    }
	
////////////////////////////////////////////////
// 2) Read the input Image ready to be converted and also the lung mask
  InputImageReaderType::Pointer imageReader = InputImageReaderType::New();

  imageReader->SetFileName( argv[2] );

  try
    {
    imageReader->Update();
    }
  catch (itk::ExceptionObject &excp)
    {
    std::cerr << "Exception thrown while writing the image" << std::endl;
    std::cerr << excp << std::endl;
    return EXIT_FAILURE;
    }
	
  // read mask
InputImageType::Pointer image = InputImageType::New();
  if(argv[6])
  {
  InputImageReaderType::Pointer maskReader = InputImageReaderType::New();


  maskReader->SetFileName( argv[6] );

  try
    {
    maskReader->Update();
    }
  catch (itk::ExceptionObject &excp)
    {
    std::cerr << "Exception thrown while writing the image" << std::endl;
    std::cerr << excp << std::endl;
    return EXIT_FAILURE;
    }
    typedef itk::NearestNeighborInterpolateImageFunction<InputImageType, double> InterpolatorType;
InterpolatorType::Pointer interpolator = InterpolatorType::New();

typedef itk::TranslationTransform<double,3> TransformType;
TransformType::Pointer transform = TransformType::New();
TransformType::OutputVectorType translation;
translation[0]=0;
translation[1]=0;
translation[2]=0;
transform->Translate(translation);


typedef itk::ResampleImageFilter<InputImageType, InputImageType> ResampleImageFilterType;
ResampleImageFilterType::Pointer resample = ResampleImageFilterType::New();
resample->SetInput(maskReader->GetOutput());
//resample->SetSize(imageReader->GetOutput()->GetLargestPossibleRegion().GetSize());
//resample->SetOutputSpacing(imageReader->GetOutput()->GetSpacing());
//resample->SetOutputOrigin(imageReader->GetOutput()->GetOrigin());
resample->SetReferenceImage(imageReader->GetOutput());
resample->UseReferenceImageOn();
resample->SetInterpolator(interpolator);
resample->SetTransform(transform.GetPointer());
resample->SetDefaultPixelValue(0);
//resample->UpdateLargestPossibleRegion();
resample->Update();

	
  typedef itk::MaskImageFilter< InputImageType, InputImageType> MaskFilterType;
	MaskFilterType::Pointer maskFilter=MaskFilterType::New();
        maskFilter->SetInput( imageReader->GetOutput() );
	maskFilter->SetMaskImage( resample->GetOutput() );
	maskFilter->Update();

image = maskFilter->GetOutput();
  }
else
image = imageReader->GetOutput();

  // multiply the float jacobian by 1000 and then save as integer image
typedef itk::MultiplyImageFilter< InputImageType, InputImageType, InputImageType> MultiplyImageType;
MultiplyImageType::Pointer multiplyFilter = MultiplyImageType::New();
multiplyFilter->SetInput(image);
if ( CT == 0){
multiplyFilter->SetConstant(1000);
}else if ( CT ==1){
multiplyFilter->SetConstant(1);
}
multiplyFilter->Update();


////////////////////////////////////////////////  
// 3) Create a MetaDataDictionary for each slice of the output.

  // Copy the dictionary from the first image and override slice
  // specific fields
  RefDicomReaderType::DictionaryRawPointer inputDict = (*(refDicomreader->GetMetaDataDictionaryArray()))[0];
  RefDicomReaderType::DictionaryArrayType outputArray;
    
  // To keep the new series in the same study as the original we need
  // to keep the same study UID. But we need new series and frame of
  // reference UID's.
  
  gdcm::UIDGenerator gen;
  std::string seriesUID = gen.Generate();
//itk::GDCMImageIO::SetUIDPrefix( gdcmIO->GetUIDPrefix(), seriesUID); ? ? ? ?
  std::string frameOfReferenceUID;
  itk::ExposeMetaData<std::string>(*inputDict, "0020|0052", frameOfReferenceUID);
  //std::string frameOfReferenceUID = gdcm::Util::CreateUniqueUID( gdcmIO->GetUIDPrefix());
  std::string studyUID;
  std::string sopClassUID;
  itk::ExposeMetaData<std::string>(*inputDict, "0020|000d", studyUID);
  itk::ExposeMetaData<std::string>(*inputDict, "0008|0016", sopClassUID);
  gdcmIO->KeepOriginalUIDOn();
  
  // Get the size and spacing information of the input image ready to be converted.
  const RefDicomImageType::SpacingType& outputSpacing =
    refDicomreader->GetOutput()->GetSpacing();
  const RefDicomImageType::RegionType& refDicomRegion =
    refDicomreader->GetOutput()->GetLargestPossibleRegion();
  const RefDicomImageType::SizeType& outputSize =
    refDicomRegion.GetSize();  

  for (unsigned int f = 0; f < outputSize[2]; f++)
    {
    // Create a new dictionary for this slice
    RefDicomReaderType::DictionaryRawPointer dict = new RefDicomReaderType::DictionaryType;

    // Copy the dictionary from the first slice
    CopyDictionary (*inputDict, *dict);

    // Set the UID's for the study, series, SOP  and frame of reference
    itk::EncapsulateMetaData<std::string>(*dict,"0020|000d", studyUID);
    itk::EncapsulateMetaData<std::string>(*dict,"0020|000e", seriesUID);
    itk::EncapsulateMetaData<std::string>(*dict,"0020|0052", frameOfReferenceUID);

    std::string sopInstanceUID = gen.Generate();
    itk::EncapsulateMetaData<std::string>(*dict,"0008|0018", sopInstanceUID);
    itk::EncapsulateMetaData<std::string>(*dict,"0002|0003", sopInstanceUID);

    // Change fields that are slice specific
    //itksys_ios::ostringstream value;
    std::ostringstream value;
    value.str("");
    value << f + 1;

    // Image Number
    itk::EncapsulateMetaData<std::string>(*dict,"0020|0013", value.str());

    // Series Description - Append new description to current series description
    // std::string oldSeriesDesc;
    // itk::ExposeMetaData<std::string>(*inputDict, "0008|103e", oldSeriesDesc);
						
	std::string seriesDesc(argv[4]);
    itk::EncapsulateMetaData<std::string>(*dict,"0008|103e", seriesDesc);

    // Series Number
    value.str("");
    value << 1001;
    itk::EncapsulateMetaData<std::string>(*dict,"0020|0011", value.str());
   
    // Image Position Patient: This is calculated by computing the
    // physical coordinate of the first pixel in each slice.
    RefDicomImageType::PointType position;
    RefDicomImageType::IndexType index;
    index[0] = 0;
    index[1] = 0;
    index[2] = f;
    multiplyFilter->GetOutput()->TransformIndexToPhysicalPoint(index, position);

    value.str("");
    value << position[0] << "\\" << position[1] << "\\" << position[2];
    itk::EncapsulateMetaData<std::string>(*dict,"0020|0032", value.str());      
    // Slice Location: For now, we store the z component of the Image
    // Position Patient.
    value.str("");
    value << position[2];
    itk::EncapsulateMetaData<std::string>(*dict,"0020|1041", value.str());       
    if ( CT == 0) 
    {
	    // Rescale Intercept
	    value.str("");
	    value << "0";
	    itk::EncapsulateMetaData<std::string>(*dict,"0028|1052", value.str());      
	
		// Rescale Slope
	    value.str("");
	    value << "1";
	    itk::EncapsulateMetaData<std::string>(*dict,"0028|1053", value.str());  
    }    

	bool changeInSpacing = false;
    if (changeInSpacing)
      {
      // Slice Thickness: For now, we store the z spacing
      value.str("");
      value << outputSpacing[2];
      itk::EncapsulateMetaData<std::string>(*dict,"0018|0050",
                                            value.str());
      // Spacing Between Slices
      itk::EncapsulateMetaData<std::string>(*dict,"0018|0088",
                                            value.str());
      }
      
    // Save the dictionary
    outputArray.push_back(dict);
    }
    
////////////////////////////////////////////////  
// 4) Shift data to undo the effect of a rescale intercept by the DICOM reader
/*
  std::string interceptTag("0028|1052");
  typedef itk::MetaDataObject< std::string > MetaDataStringType;
  itk::MetaDataObjectBase::Pointer entry = (*inputDict)[interceptTag];
    
  MetaDataStringType::ConstPointer interceptValue = 
    dynamic_cast<const MetaDataStringType *>( entry.GetPointer() ) ;
    
  int interceptShift = 0;
  if( interceptValue )
    {
    std::string tagValue = interceptValue->GetMetaDataObjectValue();
    interceptShift = -atoi ( tagValue.c_str() );
    }

  interceptShift = 0; // Here we mandatorily make intercept shift to 0. Because we know it's Jacobian. 
  ShiftScaleType::Pointer shiftScale = ShiftScaleType::New();
    shiftScale->SetInput( multiplyFilter->GetOutput());
    shiftScale->SetShift( interceptShift );
*/
////////////////////////////////////////////////  
// 5) Write the new DICOM series

  // Make the output directory and generate the file names.
  itksys::SystemTools::MakeDirectory( argv[3] );

  // Generate the file names
  OutputNamesGeneratorType::Pointer outputNames = OutputNamesGeneratorType::New();
  std::string seriesFormat(argv[3]);
  seriesFormat = seriesFormat + "/" + "IM%d.dcm";
  outputNames->SetSeriesFormat (seriesFormat.c_str());
  outputNames->SetStartIndex (1);
  outputNames->SetEndIndex (outputSize[2]);
  //outputNames->SetIncrementIndex( 1 );
  
  SeriesWriterType::Pointer seriesWriter = SeriesWriterType::New();
    seriesWriter->SetInput( multiplyFilter->GetOutput() );
    seriesWriter->SetImageIO( gdcmIO );
    seriesWriter->SetFileNames( outputNames->GetFileNames() );
    seriesWriter->SetMetaDataDictionaryArray( &outputArray );
  try
    {
    seriesWriter->Update();
    }
  catch( itk::ExceptionObject & excp )
    {
    std::cerr << "Exception thrown while writing the series " << std::endl;
    std::cerr << excp << std::endl;
    return EXIT_FAILURE;
    }
  std::cout << "The output series in directory " << argv[3]
            << " has " << outputSize[2] << " files with spacing "
            << outputSpacing
            << std::endl;
  return EXIT_SUCCESS;  
}

// Subfunction 
void CopyDictionary (itk::MetaDataDictionary &fromDict, itk::MetaDataDictionary &toDict)
{
  typedef itk::MetaDataDictionary DictionaryType;

  DictionaryType::ConstIterator itr = fromDict.Begin();
  DictionaryType::ConstIterator end = fromDict.End();
  typedef itk::MetaDataObject< std::string > MetaDataStringType;

  while( itr != end )
    {
    itk::MetaDataObjectBase::Pointer  entry = itr->second;

    MetaDataStringType::Pointer entryvalue = 
      dynamic_cast<MetaDataStringType *>( entry.GetPointer() ) ;
    if( entryvalue )
      {
      std::string tagkey   = itr->first;
      std::string tagvalue = entryvalue->GetMetaDataObjectValue();
      itk::EncapsulateMetaData<std::string>(toDict, tagkey, tagvalue); 
      }
    ++itr;
    }
}
