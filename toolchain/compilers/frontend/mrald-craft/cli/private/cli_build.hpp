
#ifndef MRALD_CRAFT_CLI_BUILD_HPP
#define MRALD_CRAFT_CLI_BUILD_HPP

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			enum class BuildType
			{
				None = 0,
				Project,
				Plugin,
				Module
			};

			enum class BuildConfig
			{
				Development = 0,
				Production
			};

			enum class Build
			{
				None = 0,
				Project_Development,
				Project_Production,
				Plugin_Development,
				Plugin_Production,
				Module_Development,
				Module_Production
			};
		};
	};
};

#endif