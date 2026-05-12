cmake_minimum_required(VERSION 3.25)
project(parser
	VERSION 1.0.0
	LANGUAGES CXX
	DESCRIPTION "Mrald-Craft Parser Application")
set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)
SET(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(
	public
	private
)

set(PUBLIC_HEADER_FILES
	public/parser.hpp
)

set(PRIVATE_HEADER_FILES
)

set(PRIVATE_SOURCE_FILES
	private/parser.cpp
)

set(MAIN_SOURCE_FILE
	main.cpp
)

add_executable(${PROJECT_NAME}
	${MAIN_SOURCE_FILE}
	${PUBLIC_HEADER_FILES}
	${PRIVATE_HEADER_FILES}
	${PRIVATE_SOURCE_FILES}
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_EXTENSIONS OFF
	#DEBUG_POSTFIX "d"
	#PUBLIC_HEADER "${PUBLIC_HEADER_FILES}"
)

target_include_directories(${PROJECT_NAME}
	PRIVATE
		../license/public
		../standard/public
		../lexer/public
)

if(WIN32)
	if (${CMAKE_GENERATOR} MATCHES "Ninja")
		find_library(LICENSE_STATIC_EXTERNAL_LIBRARY
			NAMES license.lib
			HINTS ../license/build/lib
		)
		find_library(STANDARD_STATIC_EXTERNAL_LIBRARY
			NAMES standard.lib
			HINTS ../standard/build/lib
		)
		find_library(LEXER_STATIC_EXTERNAL_LIBRARY
			NAMES lexer.lib
			HINTS ../lexer/build/lib
		)
	else()
		find_library(LICENSE_STATIC_EXTERNAL_LIBRARY
			NAMES license.lib
			HINTS ../license/build/lib/Debug
		)
		find_library(STANDARD_STATIC_EXTERNAL_LIBRARY
			NAMES standard.lib
			HINTS ../standard/build/lib/Debug
		)
		find_library(LEXER_STATIC_EXTERNAL_LIBRARY
			NAMES lexer.lib
			HINTS ../lexer/build/lib/Debug
		)
	endif()
else()
	find_library(LICENSE_STATIC_EXTERNAL_LIBRARY
		NAMES liblicense.a
		HINTS ../license/build/lib
	)
	find_library(STANDARD_STATIC_EXTERNAL_LIBRARY
		NAMES libstandard.a
		HINTS ../standard/build/lib
	)
	find_library(LEXER_STATIC_EXTERNAL_LIBRARY
		NAMES liblexer.a
		HINTS ../lexer/build/lib
	)
endif()

target_link_libraries(${PROJECT_NAME}
	PRIVATE
		${LICENSE_STATIC_EXTERNAL_LIBRARY}
		${STANDARD_STATIC_EXTERNAL_LIBRARY}
		${LEXER_STATIC_EXTERNAL_LIBRARY}
)
