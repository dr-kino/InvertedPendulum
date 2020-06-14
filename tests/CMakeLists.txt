cmake_minimum_required (VERSION 3.7)

project(TestInvertedPendulum)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

# Check for CppUTest and bail out if they don't have it
if(DEFINED ENV{CPPUTEST_HOME})
    message(STATUS "Using CppUTest home: $ENV{CPPUTEST_HOME}")
    set(CPPUTEST_INCLUDE_DIRS $ENV{CPPUTEST_HOME}/include)
    set(CPPUTEST_LIBRARIES $ENV{CPPUTEST_HOME}/lib)
    set(CPPUTEST_LDFLAGS CppUTest CppUTestExt)
else()
    find_package(PkgConfig REQUIRED)
    pkg_search_module(CPPUTEST REQUIRED cpputest>=3.8)
    message(STATUS "Found CppUTest version ${CPPUTEST_VERSION}")
endif()

enable_language(C)
enable_language(CXX)

include_directories(${CPPUTEST_INCLUDE_DIRS} ../src/)
link_directories(${CPPUTEST_LIBRARIES})

add_executable(TestInvertedPendulum 
    source/AllTests.cpp
    source/test_my_sum.cpp
    example/my_sum.c
)

include_directories(
    example/
)

# link Boost libraries to the new target
target_link_libraries(TestInvertedPendulum ${CPPUTEST_LDFLAGS})