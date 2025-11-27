// main.cpp
// Entry point for the Real-Time 3D Renderer project.

// Note: This starter code does not use GLAD yet, as it requires more setup.
// It focuses purely on creating a window with GLFW and an OpenGL context.
// This is the successful outcome of "Phase 1".

#include <iostream>
#include <GLFW/glfw3.h>

const unsigned int SCREEN_WIDTH = 800;
const unsigned int SCREEN_HEIGHT = 600;

int main() {
    // --- 1. Initialize GLFW ---
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    std::cout << "GLFW initialized successfully." << std::endl;

    // --- 2. Set OpenGL version and profile ---
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    #ifdef __APPLE__
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    #endif

    // --- 3. Create a window ---
    GLFWwindow* window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "C++ OpenGL Renderer", NULL, NULL);
    if (window == NULL) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    std::cout << "GLFW window created successfully." << std::endl;

    // --- 4. Main Render Loop ---
    std::cout << "Starting render loop..." << std::endl;
    while (!glfwWindowShouldClose(window)) {
        // Input handling (e.g., press ESC to close)
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);

        // Rendering commands here
        glClearColor(0.1f, 0.1f, 0.15f, 1.0f); // Set background color
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap the front and back buffers
        glfwSwapBuffers(window);
        // Poll for and process events
        glfwPollEvents();
    }

    // --- 5. Clean up and terminate ---
    std::cout << "Closing window and terminating application." << std::endl;
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
