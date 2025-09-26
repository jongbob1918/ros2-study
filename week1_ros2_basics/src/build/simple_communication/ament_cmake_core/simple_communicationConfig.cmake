# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_simple_communication_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED simple_communication_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(simple_communication_FOUND FALSE)
  elseif(NOT simple_communication_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(simple_communication_FOUND FALSE)
  endif()
  return()
endif()
set(_simple_communication_CONFIG_INCLUDED TRUE)

# output package information
if(NOT simple_communication_FIND_QUIETLY)
  message(STATUS "Found simple_communication: 0.0.0 (${simple_communication_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'simple_communication' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT simple_communication_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(simple_communication_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${simple_communication_DIR}/${_extra}")
endforeach()
