cmake_minimum_required(VERSION 3.26)
project(mrald_craft_scanner VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)

include_directories(
	../license
	../lexer)

set(LICENSE_HEADER_FILES
	../license/license.hpp
)
set(LICENSE_SOURCE_FILES
	../license/license.cpp
)

set(LEXER_HEADER_FILES
	../lexer/lexer.hpp
)
set(LEXER_SOURCE_FILES
	../lexer/lexer.cpp
)

add_library(license ${LICENSE_HEADER_FILES} ${LICENSE_SOURCE_FILES})
add_library(lexer ${LEXER_HEADER_FILES} ${LEXER_SOURCE_FILES})


set(SCANNER_HEADER_FILES
	scanner.hpp
)

set(SCANNER_SOURCE_FILES 
	main.cpp
	scanner.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#add_definitions(-DVERSION_MAJOR=1)
#add_definitions(-DVERSION_MINOR=0)
#add_definitions(-DVERSION_PATCH=0)

if (CMAKE_BUILD_TYPE MATCHES Development)
	add_definitions(-DDEVELOPMENT=1)
endif()

if (CMAKE_BUILD_TYPE MATCHES Production)
	add_definitions(-DPRODUCTION=1)
endif()

add_executable(${PROJECT_NAME} ${SCANNER_SOURCE_FILES} ${SCANNER_HEADER_FILES})

set(STATIC_BINARIES
	debug license optimized license
	debug lexer optimized lexer
)

target_link_libraries(${PROJECT_NAME} ${STATIC_BINARIES})