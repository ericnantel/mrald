
#include "parser.hpp"

#include <iostream>
using std::cout;

#include "lexer.hpp"

namespace Mrald
{
    namespace Craft
    {
        namespace Parser
        {
            void StartParser(int argc, char* argv[])
            {
                std::cout << "Started Mrald-Craft Parser..." << std::endl;

                Lexer::LoadMode mode = Lexer::LoadMode::Parsing;
                Lexer::StartLexer(mode);
            }
        }; //namespace Parser
    }; //namespace Craft
}; //namespace Mrald
