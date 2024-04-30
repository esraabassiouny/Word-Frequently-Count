# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\word_frequency_count_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\word_frequency_count_autogen.dir\\ParseCache.txt"
  "word_frequency_count_autogen"
  )
endif()
