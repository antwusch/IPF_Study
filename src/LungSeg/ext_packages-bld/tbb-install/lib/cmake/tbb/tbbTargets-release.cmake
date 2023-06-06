#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tbb::tbb" for configuration "Release"
set_property(TARGET tbb::tbb APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tbb::tbb PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtbb.so.2017.0.0"
  IMPORTED_SONAME_RELEASE "libtbb.so.2017"
  )

list(APPEND _IMPORT_CHECK_TARGETS tbb::tbb )
list(APPEND _IMPORT_CHECK_FILES_FOR_tbb::tbb "${_IMPORT_PREFIX}/lib/libtbb.so.2017.0.0" )

# Import target "tbb::tbbmalloc" for configuration "Release"
set_property(TARGET tbb::tbbmalloc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tbb::tbbmalloc PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtbbmalloc.so.2017.0.0"
  IMPORTED_SONAME_RELEASE "libtbbmalloc.so.2017"
  )

list(APPEND _IMPORT_CHECK_TARGETS tbb::tbbmalloc )
list(APPEND _IMPORT_CHECK_FILES_FOR_tbb::tbbmalloc "${_IMPORT_PREFIX}/lib/libtbbmalloc.so.2017.0.0" )

# Import target "tbb::tbbmalloc_proxy" for configuration "Release"
set_property(TARGET tbb::tbbmalloc_proxy APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(tbb::tbbmalloc_proxy PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libtbbmalloc_proxy.so.2017.0.0"
  IMPORTED_SONAME_RELEASE "libtbbmalloc_proxy.so.2017"
  )

list(APPEND _IMPORT_CHECK_TARGETS tbb::tbbmalloc_proxy )
list(APPEND _IMPORT_CHECK_FILES_FOR_tbb::tbbmalloc_proxy "${_IMPORT_PREFIX}/lib/libtbbmalloc_proxy.so.2017.0.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
