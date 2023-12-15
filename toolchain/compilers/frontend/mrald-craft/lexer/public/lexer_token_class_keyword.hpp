
#ifndef MRALD_CRAFT_LEXER_TOKEN_CLASS_KEYWORD_HPP
#define MRALD_CRAFT_LEXER_TOKEN_CLASS_KEYWORD_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			enum class TokenClassKeyword
			{
				Unknown = 0,
				And,
				As,
				Bool,
				Byte,
				Char,
				Class,
				Data,
				Double,
				Else,
				End,
				Enum,
				Export,
				False,
				Float,
				Float32,
				Float64,
				Func,
				If,
				Int,
				Int8,
				Int16,
				Int32,
				Int64,
				Internal,
				Import,
				Module,
				Or,
				Param,
				Project,
				Return,
				Short,
				String,
				Then,
				True,
				UInt,
				UInt8,
				UInt16,
				UInt32,
				UInt64,
				When,
				With
			};
		};
	};
};

#endif