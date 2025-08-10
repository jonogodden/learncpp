cmake_minimum_required(VERSION 3.15)

project(learncpp VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find all .cpp files in src/
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS
    src/*.cpp
)

# Define the executable
add_executable(${PROJECT_NAME} ${SOURCES} "src/magicSquare.cpp" "src/openTxt.cpp" "src/vectors.cpp")
