
#ifndef MRALD_CRAFT_LEXER_HPP
#define MRALD_CRAFT_LEXER_HPP

namespace Mrald
{
	namespace Craft
	{
		enum class LexerMode
		{
			Scan = 0,
			Parse
		};
		void Lexer(LexerMode mode);
	};
};

#endif