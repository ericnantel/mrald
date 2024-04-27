
#include "lexer.hpp"
#include "license.hpp"

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
                //You must join the license to all toolchain binaries
                Mrald::Craft::License::StartLicense();

                std::cout << "Started Mrald-Craft Lexer... mode " << (int)mode << std::endl;
            }
        }; //namespace Lexer
    }; //namespace Craft
}; //namespace Mrald
