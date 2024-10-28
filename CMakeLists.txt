cmake_minimum_required(VERSION 3.15)
project(Platformer)

set(CMAKE_CXX_STANDARD 17)

# Set the path to your SFML installation
set(SFML_DIR "C:/SFML/lib/cmake/SFML")

# Find SFML
find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)

# Add your executable
add_executable(${PROJECT_NAME} main.cpp) # Replace 'main.cpp' with your source file names

# Link SFML libraries
target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-network sfml-audio)

# Add include directory for SFML headers
target_include_directories(${PROJECT_NAME} PRIVATE "C:/SFML/include")
