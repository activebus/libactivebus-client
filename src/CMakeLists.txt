# Define project name
project(activebus-client)

# Define source files
set(${PROJECT_NAME}_SRCS
    activebus-client_global.h

    eventmanager.cpp
    eventmanager_p.h
)

add_definitions(-DACTIVEBUSCLIENT_LIBRARY)

# Tell CMake to create the executable
add_library(${PROJECT_NAME} SHARED ${${PROJECT_NAME}_SRCS})

# Link dependencies
target_link_libraries(${PROJECT_NAME} Qt5::Core activebus-core)
