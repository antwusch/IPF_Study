vtk_module(vtkFiltersParallelFlowPaths
  IMPLEMENTS
    vtkFiltersFlowPaths
  TEST_DEPENDS
    vtkIOAMR
    vtkTestingRendering
    vtkRenderingParallel
    vtkIOParallel
  KIT
    vtkParallel
  DEPENDS
    vtkCommonCore
    vtkFiltersFlowPaths
  PRIVATE_DEPENDS
    vtkCommonDataModel
    vtkCommonExecutionModel
    vtkCommonMath
    vtkCommonSystem
    vtkFiltersAMR
    vtkFiltersCore
    vtkIOCore
    vtkParallelCore
    vtkParallelMPI
  )