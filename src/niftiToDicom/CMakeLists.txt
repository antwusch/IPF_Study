cmake_minimum_required(VERSION 2.6)
PROJECT(niftiToDicom)

FIND_PACKAGE(ITK REQUIRED)
IF (ITK_FOUND)
  INCLUDE(${ITK_USE_FILE})
ELSE (ITK_FOUND)
  MESSAGE(ERROR "Cannot build without a ITK build tree or a ITK installation. Please set ITK_DIR.")
ENDIF (ITK_FOUND)

ADD_EXECUTABLE(niftiToDicom.exe niftiToDicom.cxx) 
message(${ITK_LIBRARIES})
TARGET_LINK_LIBRARIES(niftiToDicom.exe ${ITK_LIBRARIES}) 
