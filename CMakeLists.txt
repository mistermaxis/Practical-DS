cmake_minimum_required(VERSION 3.24.0)

# Define the project name, version and language
project(practical_ds VERSION 0.1.0 LANGUAGES C CXX)

# Define version 23 as the C++ standad for the project with no extensions
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add project subdirectories
add_subdirectory(dsa_core)
add_subdirectory(dsa_app)
