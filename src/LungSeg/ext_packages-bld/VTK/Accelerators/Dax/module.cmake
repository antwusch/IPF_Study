if(NOT VTK_LEGACY_REMOVE)
  vtk_module(vtkAcceleratorsDax
    IMPLEMENTS
      vtkFiltersCore
    TEST_DEPENDS
      vtkTestingCore
      vtkTestingRendering
      vtkRenderingVolume
      vtkRenderingVolumeOpenGL
      vtkIOLegacy
      vtkIOXML
      vtkImagingSources
    EXCLUDE_FROM_ALL
    DEPENDS
      vtkCommonCore
      vtkCommonDataModel
      vtkFiltersCore
    )
endif()