# cross platform project compile definition
project (SimpleUnitTest)
cmake_minimum_required (VERSION 2.16)

if (WIN32)
else (WIN32)
  add_definitions(-O3 -std=gnu++11)
endif (WIN32)

add_executable(testsut_vanilia testsut.cpp sut.cpp sut.h)
add_executable(testsut_args testsut2.cpp sut.cpp sut.h)

######## QA ########
enable_testing()

## run_test not suitable for running multiple times same app with different arguments or comment in rename_exe @ run_test
#add_test(testsut_vanilia ${CMAKE_CURRENT_SOURCE_DIR}/run_test ${CMAKE_CURRENT_BINARY_DIR}/testsut_args R,fail:0)
#add_test(testsut_args ${CMAKE_CURRENT_SOURCE_DIR}/run_test ${CMAKE_CURRENT_BINARY_DIR}/testsut_args arg1 argLast R,fail:0)
#add_test(testsut_args2 ${CMAKE_CURRENT_SOURCE_DIR}/run_test ${CMAKE_CURRENT_BINARY_DIR}/testsut_args arg1 2 3 argLast S)

add_test(testsut_vanilia ${CMAKE_CURRENT_SOURCE_DIR}/run_test ${CMAKE_CURRENT_BINARY_DIR}/testsut_vanilia R,fail:0)
add_test(testsut_args ${CMAKE_CURRENT_SOURCE_DIR}/run_test ${CMAKE_CURRENT_BINARY_DIR}/testsut_args arg1 argLast R,fail:0)

# run with: ctest -j $(nproc)
