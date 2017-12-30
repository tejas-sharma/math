cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project("Math Utils")

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
enable_testing()
include(unit_tests)
include(lib_extensions)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" OR
    "${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(warnings "-Wall -Wextra -Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
    set(warnings "/W4 /WX /EHsc")
endif()
if (NOT CONFIGURED_ONCE)
    set(CMAKE_CXX_FLAGS "${warnings}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
    set(CMAKE_C_FLAGS   "${warnings}"
    CACHE STRING "Flags used by the compiler during all build types." FORCE)
endif()

#set(RANDOM_UTILS_LOCATION /home/user/tsharma/git/random/build/librandom_utils.so)
set(RANDOM_UTILS_LOCATION /users/tsharma/src/random/build/librandom_utils.dylib)

include_directories(include)
include_directories(../random/include)
add_subdirectory(tests)
file(GLOB SOURCES "src/*.cpp")
add_library(math STATIC ${SOURCES})
add_library(random_utils SHARED IMPORTED)
set_target_properties(random_utils PROPERTIES IMPORTED_LOCATION ${RANDOM_UTILS_LOCATION})
TARGET_LINK_LIBRARIES(math random_utils)
set_property(TARGET random_utils PROPERTY CXX_STANDARD 14)
