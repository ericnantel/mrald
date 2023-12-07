cmake_minimum_required(VERSION 3.26)
project(mrald_craft_cli VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)

include_directories(
	../license
)

set(LICENSE_HEADER_FILES
	../license/license.hpp
)
set(LICENSE_SOURCE_FILES
	../license/license.cpp
)

add_library(license ${LICENSE_HEADER_FILES} ${LICENSE_SOURCE_FILES})

include_directories(
	public
	private
)

set(CLI_HEADER_FILES
	public/cli.hpp
	private/cli_args.hpp
	private/cli_build.hpp
	private/cli_cmd.hpp
	private/cli_lang.hpp
	private/cli_tool.hpp
	private/cli_user.hpp
)

set(CLI_SOURCE_FILES 
	main.cpp
	private/cli.cpp
	private/cli_args.cpp
	private/cli_tool.cpp
	private/cli_user.cpp
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

add_executable(${PROJECT_NAME} ${CLI_SOURCE_FILES} ${CLI_HEADER_FILES})

set(STATIC_BINARIES
	debug license optimized license
)

target_link_libraries(${PROJECT_NAME} ${STATIC_BINARIES})