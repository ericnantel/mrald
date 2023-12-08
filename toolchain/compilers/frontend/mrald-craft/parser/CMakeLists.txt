cmake_minimum_required(VERSION 3.26)
project(mrald_craft_parser VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)

#including directories
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

#setting library name suffix
if (CMAKE_BUILD_TYPE MATCHES Development)
	set(LIBRARY_NAME_SUFFIX "-dev")
elseif (CMAKE_BUILD_TYPE MATCHES Production)
	set(LIBRARY_NAME_SUFFIX "-prod")
else()
	set(LIBRARY_NAME_SUFFIX "")
endif()

#adding libraries
add_library(license${LIBRARY_NAME_SUFFIX} STATIC
	${LICENSE_HEADER_FILES} ${LICENSE_SOURCE_FILES}
)
add_library(lexer${LIBRARY_NAME_SUFFIX} STATIC
	${LEXER_HEADER_FILES} ${LEXER_SOURCE_FILES}
)

set(PARSER_HEADER_FILES
	parser.hpp
)

set(PARSER_SOURCE_FILES 
	main.cpp
	parser.cpp
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

#add_definitions(-DVERSION_MAJOR=1)
#add_definitions(-DVERSION_MINOR=0)
#add_definitions(-DVERSION_PATCH=0)

#adding macro definitions
if (CMAKE_BUILD_TYPE MATCHES Development)
	add_definitions(-DDEVELOPMENT=1)
elseif (CMAKE_BUILD_TYPE MATCHES Production)
	add_definitions(-DPRODUCTION=1)
endif()

add_executable(${PROJECT_NAME} ${PARSER_SOURCE_FILES} ${PARSER_HEADER_FILES})

set(STATIC_BINARIES
	license${LIBRARY_NAME_SUFFIX}
	lexer${LIBRARY_NAME_SUFFIX}
)

target_link_libraries(${PROJECT_NAME} 
	${STATIC_BINARIES}
)