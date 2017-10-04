cmake_minimum_required(VERSION 3.6)
project(ft_printf)

file(GLOB SOURCES ./src/*.c ./src/*/*.c ./src/*/*/*.c ./src/*/*/*/*.c ./src/*/*/*/*/*.c)

set(LIB_PATH libft)


set(HOME_FLAGS "-I ./inc")
#set(MACOS_FLAGS "-I ./inc -I ./frameworks/SDL2/Versions/A/Headers -I ./frameworks/SDL2_image/Versions/A/Headers -F ./frameworks -framework SDL2 -framework SDL2_image")
set(CMAKE_C_FLAGS ${HOME_FLAGS})
set(SOURCE_FILES ${SOURCES})
include_directories("./libft/" "./inc")
add_executable(ft_printf ${SOURCE_FILES})

file(GLOB SOURCES_LIB ${LIB_PATH}/*.c)
add_library(ft STATIC ${SOURCES_LIB}/)

target_link_libraries(ft_printf ft)