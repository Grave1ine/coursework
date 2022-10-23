cmake_minimum_required(VERSION 3.23)
project(t_rex)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

find_package(Curses REQUIRED)

if (CURSES_NOT_FOUND)
    message(FATAL_ERROR "Curses not found")
else ()
    message(STATUS "Curses found")
    include_directories(${CURSES_INCLUDE_DIR})
endif ()

include_directories(include)


############################################################
#Generate the static library from the library sources
############################################################

add_library(t_rex_lib STATIC
            src/Game.cpp
            src/Menu.cpp
            src/Palette.cpp
            src/Screen.cpp
            src/Board.cpp
            src/Drawable.cpp
            src/Bonus.cpp
            src/Drawable_Str.cpp
            src/Drawable_Rect.cpp
            src/T_Rex.cpp
            )

target_include_directories(t_rex_lib
                           PUBLIC
                           ${PROJECT_SOURCE_DIR}/include
                           )

target_link_libraries(t_rex_lib
                      PUBLIC
                      ${CURSES_LIBRARIES}
                      )

############################################################
# Create an executable
############################################################

add_executable(t_rex App/main.cpp)

target_link_libraries(t_rex
                      PRIVATE
                      t_rex_lib
                      )



