# Create the executable binary
add_executable(dsa_app main.cpp)

# Link to target library
# This pulls in the source code and include paths
target_link_libraries(dsa_app PRIVATE dsa_core)