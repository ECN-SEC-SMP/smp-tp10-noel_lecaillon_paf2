cmake_minimum_required(VERSION 3.14)

project(MyGTestProject)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_executable(
  RunTests
  test.cpp
  Calculator.cpp
)


target_link_libraries(
  RunTests
  gtest_main
)


include(GoogleTest)
gtest_discover_tests(RunTests)