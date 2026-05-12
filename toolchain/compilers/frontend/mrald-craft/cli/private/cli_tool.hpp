
#ifndef MRALD_CRAFT_CLI_TOOL_HPP
#define MRALD_CRAFT_CLI_TOOL_HPP

#include "cli_args.hpp"
#include "cli_cmd.hpp"

namespace Mrald
{
    namespace Craft
    {
        namespace CLI
        {
            struct Tool
            {
                Cmd cmd;
                int cmdStart;
                bool cmdHelp;
                bool cmdVerbose;
            };

            Tool ParseTool(const Args& args);

            void StartToolMode(const Tool& tool);
        }; //namespace CLI
    }; //namespace Craft
}; //namespace Mrald

#endif
