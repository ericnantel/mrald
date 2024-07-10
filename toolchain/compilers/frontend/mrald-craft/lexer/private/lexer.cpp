
#include "license.hpp"
#include "standard.hpp"
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
                //You must join the license to all toolchain binaries
                Mrald::Craft::License::StartLicense();

				//You must join the standard version to all toolchain binaries
				unsigned major, minor, patch;
				Mrald::Craft::Standard::GetVersion(major, minor, patch);
				std::cout << "Standard Version " << major << "." << minor << "." << patch << std::endl;
				
				//You must join the standard codename to all toolchain binaries
				char codename[64];
				Mrald::Craft::Standard::GetCodename(codename);
				std::cout << "Standard Codename " << codename << std::endl;

                std::cout << "Started Mrald-Craft Lexer... mode " << (int)mode << std::endl;
            }
        }; //namespace Lexer
    }; //namespace Craft
}; //namespace Mrald
