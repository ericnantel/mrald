
#ifndef MRALD_CRAFT_LEXER_TOKEN_HPP
#define MRALD_CRAFT_LEXER_TOKEN_HPP

#include "lexer_token_class.hpp"
#include "lexer_token_class_keyword.hpp"
#include "lexer_token_class_symbol.hpp"
#include "lexer_token_class_number.hpp"
#include "lexer_token_class_word.hpp"
#include "lexer_token_class_link.hpp"
#include "lexer_token_class_comment.hpp"
#include "lexer_token_col.hpp"
#include "lexer_token_loc.hpp"

namespace Mrald
{
	namespace Craft
	{
		namespace Lexer
		{
			struct Token
			{
				TokenClass klass;
				TokenClassKeyword klassKeyword;
				TokenClassSymbol klassSymbol;
				TokenClassNumber klassNumber;
				TokenClassWord klassWord;
				TokenClassLink klassLink;
				TokenClassComment klassComment;
				TokenCol col;
				TokenLoc loc;
			};
		};
	};
};

#endif