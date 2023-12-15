
#ifndef MRALD_CRAFT_LEXER_TOKEN_CLASS_WORD_HPP
#define MRALD_CRAFT_LEXER_TOKEN_CLASS_WORD_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			enum class TokenClassWord
			{
				Unknown = 0,
				AlphabetOnly,
				AnyCharacters
			};
		};
	};
};

#endif