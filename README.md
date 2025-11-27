# Real-Time 3D Renderer in C++ and OpenGL

[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![API](https://img.shields.io/badge/API-OpenGL-green.svg)](https://www.opengl.org/)
[![Build](https://img.shields.io/badge/Build-CMake-orange.svg)](https://cmake.org/)

This is an educational project to build a 3D rendering engine from the ground up. The primary goal is to gain a deep, practical understanding of the entire real-time graphics pipeline, from window creation to loading and rendering complex, lit 3D models.

## Project Vision & Goals

The vision is to create a simple, modular, and performant renderer that demonstrates core computer graphics concepts. Key learning objectives include:
1.  **Mastering the Graphics Pipeline:** Understanding how vertex data is transformed and processed by the GPU to become pixels on the screen.
2.  **3D Math Implementation:** Gaining proficiency with the linear algebra (vectors, matrices) behind 3D transformations.
3.  **Shader Programming:** Writing custom vertex and fragment shaders in GLSL to control rendering logic and implement lighting.
4.  **Performance & Memory Management:** Writing efficient, modern C++ code to manage GPU resources and maintain high frame rates.

## Planned Features & Architecture

The renderer is being built incrementally in distinct phases:

### Phase 1: Foundation & Windowing
-   [x] **Status: Complete**
-   [x] Initialize a window and a modern OpenGL (3.3+) context using GLFW.
-   [x] Set up a stable, continuous render loop.
-   [x] Handle basic user input (e.g., closing the window).

### Phase 2: Rendering a Simple Shape
-   [ ] **Status: In Progress**
-   [ ] Define vertex data for a 2D shape (triangle) and send it to the GPU using Vertex Buffer Objects (VBOs).
-   [ ] Write a minimal vertex and fragment shader in GLSL to render the shape with a solid color.
-   [ ] Create a shader management class to compile and link GLSL programs.

### Phase 3: 3D Transformations (MVP Pipeline)
-   [ ] Implement the Model-View-Projection (MVP) matrix transformations.
-   [ ] Create a camera class to allow for free movement within the 3D scene.
-   [ ] Render 3D objects (e.g., a cube) that can be moved, rotated, and scaled in world space.

### Phase 4: Lighting
-   [ ] Implement the Phong lighting model (ambient, diffuse, specular) in GLSL.
-   [ ] Add light sources to the scene that dynamically affect object appearance.

### Phase 5: Model Loading
-   [ ] Integrate a library like `assimp` to load complex 3D models from file formats (e.g., `.obj`, `.fbx`).
-   [ ] Develop a mesh and model rendering system.

## Technology Stack
*   **Language:** C++ (C++17)
*   **Graphics API:** OpenGL 3.3+
*   **Shading Language:** GLSL
*   **Build System:** CMake
*   **Libraries:**
    *   **GLFW:** For window and input management.
    *   **GLAD:** For loading OpenGL function pointers.
    *   **GLM:** For OpenGL mathematics (vectors, matrices).

## Current Status
**Ongoing.** Phase 1 is complete. The core application window and OpenGL context are initialized successfully and a stable render loop is running. Development is currently focused on Phase 2: rendering the first triangle.

## How to Build and Run
This project uses CMake. You will need to have a C++ compiler, CMake, and the required libraries (GLFW) installed.

```bash
# 1. Clone the repository
git clone https://github.com/GauravMoturi/cpp-opengl-renderer.git
cd cpp-opengl-renderer

# 2. Configure the project with CMake
cmake -S . -B build

# 3. Build the project
cmake --build build

# 4. Run the executable
./build/Renderer```
