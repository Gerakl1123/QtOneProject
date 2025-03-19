# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FileManagerArda_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FileManagerArda_autogen.dir\\ParseCache.txt"
  "FileManagerArda_autogen"
  )
endif()
