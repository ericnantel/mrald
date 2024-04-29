
#include "formatter.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
    namespace Craft
    {
        namespace Formatter
        {
            void StartFormatter(int argc, char* argv[])
            {
                std::cout << "Started Mrald-Craft Formatter..." << std::endl;

                Lexer::LoadMode mode = Lexer::LoadMode::Formatting;
                Lexer::StartLexer(mode);
            }
        }; //namespace Formatter
    }; //namespace Craft
}; //namespace Mrald
