
#include "scanner.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
	namespace Craft
	{
		void Scan(int argc, char* argv[])
		{
			std::cout << "Started Mrald-Craft Scanner..." << std::endl;

			Lexer::LoadMode mode = Lexer::LoadMode::Scan;
			Lexer::Load(mode);

			//Scanner needs to verify there is no typo or missing keywords
			//Also ensuring the mrald standard rules are followed
			//Needs to output warnings and errors as well
		}
	};
};