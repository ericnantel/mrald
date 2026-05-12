
#include "cli.hpp"
#include "cli_tool.hpp"
#include "cli_user.hpp"
#include "standard.hpp"

#include <iostream>
using std::cout;

namespace Mrald
{
    namespace Craft
    {
        namespace CLI
        {
            void StartCLI(const Args& args)
            {
                //You must join the standard version to all toolchain binaries
                unsigned major, minor, patch;
                Mrald::Craft::Standard::GetVersion(major, minor, patch);
                std::cout << "Standard Version " << major << "." << minor << "." << patch << std::endl;

                //You must join the standard codename to all toolchain binaries
                char codename[64];
                Mrald::Craft::Standard::GetCodename(codename);
                std::cout << "Standard Codename " << codename << std::endl;

                std::cout << "Started Mrald-Craft CLI..." << std::endl;

                if (args.Size() > 1)
                {
                    const Tool tool = ParseTool(args);
                    StartToolMode(tool);
                }
                else
                {
                    const User user = ParseUser(args);
                    StartUserMode(user);
                }
            }
        } //namespace CLI
    }; //namespace Craft
}; //namespace Mrald
                    
