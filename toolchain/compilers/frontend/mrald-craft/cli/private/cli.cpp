
#include "cli.hpp"

#include <iostream>
using std::cout;

#include "cli_tool.hpp"
#include "cli_user.hpp"

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			void Start(const Args& args)
			{
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
		}
	};
};