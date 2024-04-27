
#include "lexer.hpp"

#include <iostream>
using std::cout;

namespace Mrald
{
    namespace Craft
    {
        namespace Lexer
        {
            void StartLexer(LoadMode mode)
            {
                std::cout << "Started Mrald-Craft Lexer... mode " << (int)mode << std::endl;
            }
        }; //namespace Lexer
    }; //namespace Craft
}; //namespace Mrald
