
#ifndef MRALD_CRAFT_LEXER_TOKEN_CLASS_SYMBOL_HPP
#define MRALD_CRAFT_LEXER_TOKEN_CLASS_SYMBOL_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			enum class TokenClassSymbol
			{
				Unknown = 0,
				Ampersand,
				BackwardSlash,
				CloseBracket,
				CloseParenthesis,
				Comma,
				Dash,
				Dot,
				EndFile,
				ExclamationMark,
				Equal,
				EqualEqual,
				ForwardSlash,
				GreaterThan,
				GreaterOrEqual,
				Hyphen,
				LeftShift,
				LessThan,
				LessOrEqual,
				NewLine,
				OpenBracket,
				OpenParenthesis,
				Pipe,
				PlusSign,
				QuestionMark,
				RightShift,
				SemiColon,
				Space,
				Tab,
				Tilde,
				TwoPoints,
				Underscore
			};
		};
	};
};

#endif