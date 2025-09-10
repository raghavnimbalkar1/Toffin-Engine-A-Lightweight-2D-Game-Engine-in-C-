# Set the minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.10)

# Define the project name. This will be the name of the executable.
project(ToffinEngine)

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the SFML library on your computer.
# This is a critical step. If this fails, you need to check your SFML installation.
find_package(SFML 2.6.1 REQUIRED system window graphics)

# Create a list of all your source files
set(SOURCES
    main.cpp
    Renderer.cpp
    math/Vector2D.cpp
    physics/Physics.cpp
    objects/GameObject.cpp
)

# Add all the source files to the executable.
# NOTE: For now, the .cpp files other than main.cpp can be empty.
add_executable(${PROJECT_NAME} ${SOURCES})

# Link our executable against the SFML libraries it needs
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-graphics)

