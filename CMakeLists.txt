# cross platform project compile definition
project (SimpleUnitTest)
cmake_minimum_required (VERSION 2.6)

if (WIN32)
else (WIN32)
  add_definitions(-O3 -std=gnu++11)
endif (WIN32)

add_executable(testsut testsut.cpp sut.cpp sut.h)

######## QA ########
enable_testing()

add_test(testsut ${PROJECT_BIN_DIR}/testsut)
set_tests_properties(testsut 
  PROPERTIES PASS_REGULAR_EXPRESSION "fail: 0")