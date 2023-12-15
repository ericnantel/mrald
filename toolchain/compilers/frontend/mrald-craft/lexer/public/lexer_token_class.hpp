
#ifndef MRALD_CRAFT_LEXER_TOKEN_CLASS_HPP
#define MRALD_CRAFT_LEXER_TOKEN_CLASS_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			enum class TokenClass
			{
				Unknown = 0,
				Keyword,
				Symbol,
				Number,
				Word,
				Link,
				Comment
			};
		};
	};
};

#endif