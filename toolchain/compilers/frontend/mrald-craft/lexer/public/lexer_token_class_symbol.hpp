
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
				//Apostrophe,
				Asterisk,
				AtSign,
				BackwardSlash,
				CloseAngleBracket,
				CloseSquareBracket,
				CloseParenthesis,
				Colon,
				Comma,
				Dash,
				DoubleBackwardSlash,
				DoubleForwardSlash,
				DoubleQuote,
				Dot,
				EndFile,
				ExclamationMark,
				Equal,
				//EqualEqual,
				ForwardSlash,
				GreaterThan,
				GreaterOrEqual,
				Hyphen,
				//LeftShift,
				LessThan,
				LessOrEqual,
				NewLine,
				OpenAngleBracket,
				OpenSquareBracket,
				OpenParenthesis,
				PercentSign,
				Pipe,
				PlusSign,
				QuestionMark,
				Quote,
				//RightShift,
				SemiColon,
				Space,
				Tab,
				Tilde,
				Underscore
			};
		};
	};
};

#endif
