# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

# compile CXX with /usr/bin/c++
CXX_FLAGS =   -Wno-array-bounds -msse2 -I/Users/awuschner/src/niftiToDicom/ITKIOFactoryRegistration -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Video/IO/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Video/Filtering/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Video/Core/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/TestKernel/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Nonunit/Review/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/Watersheds/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/Voronoi/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Bridge/VTK/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/SpatialFunction/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/RegistrationMethodsv4/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/RegionGrowing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/QuadEdgeMeshFiltering/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/OpenJPEG/src/openjpeg -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/OpenJPEG/src/openjpeg -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/NeuralNetworks/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/Metricsv4/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/Optimizersv4/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/MarkovRandomFieldsClassifiers/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/LevelSetsv4/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/LabelVoting/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/KLMRegionGrowing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageNoise/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageFusion/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/VTK/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TransformMatlab/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TransformInsightLegacy/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TransformHDF5/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TransformBase/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TransformFactory/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/Stimulate/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/Siemens/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/RAW/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/PNG/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/PNG/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/PNG/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/NRRD/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/NrrdIO/src/NrrdIO -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/NrrdIO/src/NrrdIO -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/NIFTI/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/Meta/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/Mesh/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/MRC/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/LSM/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/TIFF/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/TIFF/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/TIFF/src/itktiff -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/TIFF/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/JPEG/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/JPEG/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/JPEG/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/HDF5/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/GIPL/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/GE/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/IPL/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/GDCM/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/CSV/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/BioRad/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/BMP/include -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/HDF5/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/HDF5/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/GPUThresholding/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/GPUSmoothing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/GPUPDEDeformable/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/GPUCommon/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/GPUImageFilterBase/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/GPUAnisotropicSmoothing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/GPUFiniteDifference/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/GPUCommon/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GIFTI/src/gifticlib -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/NIFTI/src/nifti/znzlib -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/NIFTI/src/nifti/niftilib -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/DataStructureAndEncodingDefinition -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/MessageExchangeDefinition -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/InformationObjectDefinition -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/Common -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/DataDictionary -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/GDCM/src/gdcm/Source/MediaStorageAndFileFormat -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/GDCM/src/gdcm/Source/Common -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/GDCM -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/FEM/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/PDEDeformable/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/FEM/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Registration/Common/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/SpatialObjects/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/XML/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/Expat/src/expat -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/Expat/src/expat -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/Eigen/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/DisplacementField/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/DiffusionTensorImage/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Denoising/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/DeformableMesh/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Deconvolution/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/DICOMParser/src/DICOMParser -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/DICOMParser/src/DICOMParser -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Convolution/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/FFT/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Colormap/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/Classifiers/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/BioCell/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/BiasCorrection/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/Polynomials/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/AntiAlias/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/LevelSets/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/SignedDistanceFunction/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/Optimizers/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageFeature/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageSources/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageGradient/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Smoothing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageCompare/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/IO/ImageBase/include -I/Users/awuschner/src/lungreg-bld/Modules/IO/ImageBase -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/FastMarching/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/QuadEdgeMesh/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/DistanceMap/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/NarrowBand/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageLabel/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/BinaryMathematicalMorphology/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/MathematicalMorphology/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Segmentation/ConnectedComponents/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Thresholding/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageIntensity/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/Path/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageStatistics/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/SpatialObjects/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/MetaIO/src/MetaIO/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/MetaIO/src/MetaIO/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/ZLIB/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/ZLIB/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/Mesh/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageCompose/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/LabelMap/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/AnisotropicSmoothing/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageGrid/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/ImageFunction/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/Transform/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Numerics/Statistics/include -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/Netlib -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/ImageAdaptors/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/CurvatureFlow/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Filtering/ImageFilterBase/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/FiniteDifference/include -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/Core/Common/include -I/Users/awuschner/src/lungreg-bld/Modules/Core/Common -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNLInstantiation/include -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/VNL/src/vxl/core -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/VNL/src/vxl/vcl -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/VNL/src/vxl/v3p/netlib -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNL/src/vxl/core -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNL/src/vxl/vcl -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNL/src/vxl/v3p/netlib -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/KWSys/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/KWIML/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/KWIML/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/DoubleConversion/src/double-conversion -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/DoubleConversion/src/double-conversion -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNL/src/vxl/core/vnl/algo -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/VNL/src/vxl/core/vnl -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/c++/src -I/Users/awuschner/src/lungreg-bld/Modules/ThirdParty/HDF5/src/itkhdf5/src -I/Users/awuschner/src/ext_packages-bld/ITK/Modules/ThirdParty/HDF5/src/itkhdf5/src   

CXX_DEFINES = -DITK_IO_FACTORY_REGISTER_MANAGER
