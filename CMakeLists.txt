cmake_minimum_required(VERSION 3.10)

project(Renderer)

# Set C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find necessary packages
# On most systems, you can install these with a package manager.
# e.g., on macOS with Homebrew: brew install glfw
# e.g., on Ubuntu: sudo apt-get install libglfw3-dev
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

# Add your source files here
add_executable(Renderer src/main.cpp)

# Link libraries to your executable
target_link_libraries(Renderer PRIVATE OpenGL::GL glfw)
