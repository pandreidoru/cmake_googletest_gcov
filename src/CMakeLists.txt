# TARGET - Main project.
add_executable(${PROJECT_NAME}
               main.cpp
               cub.cc)

target_include_directories(${PROJECT_NAME}
                           PUBLIC
                           ${PROJECT_SOURCE_DIR}/inc)
