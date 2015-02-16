cmake_minimum_required(VERSION 2.8)

project(Ecosys)

# Set output directories
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Set flags
if(APPLE)
	set(CMAKE_CXX_FLAGS "-stdlib=libc++")
endif(APPLE)
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")

# Set include directories
include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/src")

# Set source files
set(ecosys_SOURCES
	src/ecosys/component-manager.cpp
	src/ecosys/component-observer.cpp
	src/ecosys/entity-id-pool.cpp
	src/ecosys/entity-manager.cpp)

# Set header files
set(ecosys_HEADERS
	include/ecosys/component.hpp
	include/ecosys/component-manager.hpp
	include/ecosys/component-observer.hpp
	include/ecosys/ecs.hpp
	include/ecosys/entity-context.hpp
	include/ecosys/entity-id.hpp
	include/ecosys/entity-id-pool.hpp
	include/ecosys/entity-manager.hpp)

# Set linked libraries
set(ecosys_LIBRARIES stdc++)

# Build and install library
add_library(ecosys ${ecosys_SOURCES} ${ecosys_HEADERS})
target_link_libraries(ecosys ${ecosys_LIBRARIES})
install(TARGETS ecosys DESTINATION lib)

# Install public headers
install(
	DIRECTORY ${PROJECT_SOURCE_DIR}/include/ecosys
	DESTINATION include
	FILES_MATCHING PATTERN *.hpp)
