cmake_minimum_required(VERSION 3.25)
project(lexer
	VERSION 1.0.0
	LANGUAGES CXX
	DESCRIPTION "Mrald-Craft Lexer Library")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(
	public
	private
)

set(PUBLIC_HEADER_FILES
	public/lexer.hpp
	public/lexer_load_mode.hpp
	public/lexer_token.hpp
	public/lexer_token_class.hpp
	public/lexer_token_class_comment.hpp
	public/lexer_token_class_link.hpp
	public/lexer_token_class_number.hpp
	public/lexer_token_class_number_sign.hpp
	public/lexer_token_class_symbol.hpp
	public/lexer_token_class_word.hpp
	public/lexer_token_col.hpp
	public/lexer_token_loc.hpp
)

set(PRIVATE_HEADER_FILES
)

set(PRIVATE_SOURCE_FILES
	private/lexer.cpp
)

add_library(${PROJECT_NAME} STATIC
	${PUBLIC_HEADER_FILES}
	${PRIVATE_HEADER_FILES}
	${PRIVATE_SOURCE_FILES}
)

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 17
	CXX_EXTENSIONS OFF
	#DEBUG_POSTFIX "d"
	PUBLIC_HEADER "${PUBLIC_HEADER_FILES}"
)

target_include_directories(${PROJECT_NAME}
	PRIVATE
		../license/public
)

if(WIN32)
	find_library(LICENSE_STATIC_EXTERNAL_LIBRARY
		NAMES license.lib
		HINTS ../license/build/lib/Debug
	)
else()
	find_library(LICENSE_STATIC_EXTERNAL_LIBRARY
		NAMES liblicense.a
		HINTS ../license/build/lib
	)
endif()

target_link_libraries(${PROJECT_NAME}
	PRIVATE ${LICENSE_STATIC_EXTERNAL_LIBRARY}	
)
