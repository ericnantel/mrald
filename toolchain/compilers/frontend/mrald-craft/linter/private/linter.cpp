
#include "linter.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
    namespace Craft
    {
        namespace Linter
        {
            void StartLinter(int argc, char* argv[])
            {
                std::cout << "Started Mrald-Craft Linter..." << std::endl;

                Lexer::LoadMode mode = Lexer::LoadMode::Linting;
                Lexer::StartLexer(mode);
            }
        }; //namespace Linter
    }; //namespace Craft
}; //namespace Mrald
