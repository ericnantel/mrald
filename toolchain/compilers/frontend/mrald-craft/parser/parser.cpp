
#include "parser.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
	namespace Craft
	{
		void Parse(int argc, char* argv[])
		{
			std::cout << "Started Mrald-Craft Parser..." << std::endl;

			Lexer::LoadMode mode = Lexer::LoadMode::Parse;
			Lexer::Load(mode);

			//Parser needs to form blocks, constants and modules
			//Needs to output IR Files (.ll) and some Meta Files
			//Needs to specify when external files or modules are required
			//So that the Backend can start assembling with LLVM or Assemblers (Masm, Nasm, etc.)
		}
	};
};