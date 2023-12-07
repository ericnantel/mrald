
#ifndef MRALD_CRAFT_CLI_USER_HPP
#define MRALD_CRAFT_CLI_USER_HPP

#include "cli_lang.hpp"
#include "cli_build.hpp"
#include "cli_args.hpp"

#include <string>
using std::string;

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			struct User
			{
				Lang lang;
				Build build;
				std::string filePath;
			};

			User ParseUser(const Args& args);

			void StartUserMode(const User& user);
		};
	};
};

#endif