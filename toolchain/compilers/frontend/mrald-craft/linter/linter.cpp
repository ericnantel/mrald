
#include "linter.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
    namespace Craft
    {
        void Lint(int argc, char* argv[])
        {
            std::cout << "Started Mrald-Craft Linter..." << std::endl;

            Lexer::LoadMode mode = Lexer::LoadMode::Linting;
            Lexer::Load(mode);
        }
    }; //namespace Craft
}; //namespace Mrald
