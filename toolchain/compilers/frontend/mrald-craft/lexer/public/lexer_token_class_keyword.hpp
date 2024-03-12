
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
				As,
				Boolean,
				Break,
				Byte,
				//Case,
				Char,
				Class,
				Constant,
				Continue,
				Copy,
				Data,
				//Default,
				Double,
				Elif,
				Else,
				End,
				//Enum,
				Export,
				False,
				//F16,
				F32,
				F64,
				Float,
				For,
				Func,
				//Goto,
				//Half,
				If,
				Import,
				Int,
				Int8,
				Int16,
				Int32,
				Int64,
				Long,
				Main,
				//Meta,
				//Module,
				//Null,
				Operator,
				Param,
				Parent,
				//Pointer,
				//Program,
				Readonly,
				Repeat,
				Return,
				Short,
				//Switch,
				True,
				Uint,
				Uint8,
				Uint16,
				Uint32,
				Uint64,
				ULong,
				Ushort,
				//When,
				While,
				With
			};
		};
	};
};

#endif
