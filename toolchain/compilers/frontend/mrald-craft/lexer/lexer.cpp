
#include "lexer.hpp"

#include <iostream>
using std::cout;

namespace Mrald
{
	namespace Craft
	{
		void Lexer(LexerMode mode)
		{
			std::cout << "Started Mrald-Craft Lexer... mode " << (int)mode << std::endl;
			//todo use filehandle and start tokenization
			//depending on the mode; we are either in the scan or parse stage
		}
	};
};