cmake_minimum_required(VERSION 3.22)
project(TextAdventure LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(game
  src/play.cpp
  src/player.cpp
  src/enemy.cpp
)

# Tell the target where headers are
target_include_directories(game PRIVATE
  ${CMAKE_SOURCE_DIR}/include
)

# Nice warnings (clang)
target_compile_options(game PRIVATE -Wall -Wextra -Wpedantic)

# Put the built binary under build/bin
set_target_properties(game PROPERTIES
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
