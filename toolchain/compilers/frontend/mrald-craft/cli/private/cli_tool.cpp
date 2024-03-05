
#include "cli_tool.hpp"

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			Tool ParseTool(const Args& args)
			{
				Tool tool;
				tool.cmd = Cmd::Unknown;
				tool.cmdStart = -1;
				tool.cmdHelp = false;
				tool.cmdVerbose = false;

				if (args.Size() > 256U)
				{
				}

				const auto paramSize = args.Size() - 1U;
				for (auto paramIndex = 0U; paramIndex < paramSize; ++paramIndex)
				{
					const auto& param = args.At(paramIndex + 1U);
					if (param == "-l" || param == "--lang")
					{
						tool.cmd = Cmd::Lang;
						tool.cmdStart = paramIndex + 1U;
					}
					else if (param == "-b" || param == "--build")
					{
						tool.cmd = Cmd::Build;
						tool.cmdStart = paramIndex + 1U;
					}

					if (param == "-h" || param == "--help")
					{
						tool.cmdHelp = true;
					}

					if (param == "-v" || param == "--verbose")
					{
						tool.cmdVerbose = true;
					}
				}

				return tool;
			}

			void StartToolMode(const Tool& tool)
			{
				if (tool.cmd == Cmd::Unknown)
				{
				}

				if (tool.cmd == Cmd::Lang)
				{
					//
				}

				if (tool.cmd == Cmd::Build)
				{
					//
				}
			}
		};
	};
};
