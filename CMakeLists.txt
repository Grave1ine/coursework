cmake_minimum_required(VERSION 3.23)
project(Sega)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Curses REQUIRED)

if (CURSES_NOT_FOUND)
    message(FATAL_ERROR "Curses not found")
else ()
    message(STATUS "Curses found")
    include_directories(${CURSES_INCLUDE_DIR})
endif ()

include_directories(.)


############################################################
# Create an executable
############################################################

add_executable(Sega main.cpp
               Game.cpp
               Menu.cpp
               Palette.cpp
               Pearson.cpp
               Screen.cpp
               Board.cpp
               Board.h
               Game.h
               Control.h
               GameState.h
               Menu.h
               palette.h
               Pearson.h
               Screen.h
               )


target_link_libraries(Sega
                      PUBLIC
                      ${CURSES_LIBRARIES}
                      )



