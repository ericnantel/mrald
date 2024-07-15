
#include "linter.hpp"
#include "lexer.hpp"
#include "standard.hpp"

#include <iostream>
using std::cout;

namespace Mrald
{
    namespace Craft
    {
        namespace Linter
        {
            void StartLinter(int argc, char* argv[])
            {
                //You must join the standard version to all toolchain binaries
                unsigned major, minor, patch;
                Mrald::Craft::Standard::GetVersion(major, minor, patch);
                std::cout << "Standard Version " << major << "." << minor << "." << patch << std::endl;

                //You must join the standard codename to all toolchain binaries
                char codename[64];
                Mrald::Craft::Standard::GetCodename(codename);
                std::cout << "Standard Codename " << codename << std::endl;

                std::cout << "Started Mrald-Craft Linter..." << std::endl;

                Lexer::LoadMode mode = Lexer::LoadMode::Linting;
                Lexer::StartLexer(mode);
            }
        }; //namespace Linter
    }; //namespace Craft
}; //namespace Mrald
                    
