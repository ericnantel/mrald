
#include "cli_user.hpp"

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			User ParseUser(const Args& args)
			{
				User user;
				user.lang = Lang::English;
				user.build = Build::None;
				user.filePath = "";

				if (args.Size() > 256U)
				{
				}

				int langStart = -1;
				int buildStart = -1;
				
				const auto paramSize = args.Size() - 1U;
				for (auto paramIndex = 0U; paramIndex < paramSize; ++paramIndex)
				{
					const auto& param = args.At(paramIndex + 1U);
					if (param == "-l" || param == "--lang")
					{
						langStart = paramIndex + 1U;
					}
					else if (param == "-b" || param == "--build")
					{
						buildStart = paramIndex + 1U;
					}
				}

				if (langStart != -1)
				{
					if (langStart + 1U >= args.Size())
					{
					}

					const auto& langParam = args.At(langStart + 1U);
					if (langParam == "en" || langParam == "english")
					{
						user.lang = Lang::English;
					}
					else if (langParam == "fr" || langParam == "french")
					{
						user.lang = Lang::French;
					}
				}

				if (buildStart != -1)
				{
					if (buildStart + 3U >= args.Size())
					{
					}

					BuildType buildType = BuildType::None;
					BuildConfig buildConfig = BuildConfig::Development;

					const auto& buildTypeParam = args.At(buildStart + 1U);
					if (buildTypeParam == "proj" || buildTypeParam == "project")
					{
						buildType = BuildType::Project;
					}
					else if (buildTypeParam == "plug" || buildTypeParam == "plugin")
					{
						buildType = BuildType::Plugin;
					}
					else if (buildTypeParam == "mod" || buildTypeParam == "module")
					{
						buildType = BuildType::Module;
					}

					const auto& buildConfigParam = args.At(buildStart + 2U);
					if (buildConfigParam == "dev" || buildConfigParam == "development")
					{
						buildConfig = BuildConfig::Development;
					}
					else if (buildConfigParam == "prod" || buildConfigParam == "production")
					{
						buildConfig = BuildConfig::Production;
					}

					const auto& filePathParam = args.At(buildStart + 3U);

					if (buildType != BuildType::None)
					{
						if (buildType == BuildType::Project && buildConfig == BuildConfig::Development)
						{
							user.build = Build::Project_Development;
						}
						else if (buildType == BuildType::Project && buildConfig == BuildConfig::Production)
						{
							user.build = Build::Project_Production;
						}
						else if (buildType == BuildType::Plugin && buildConfig == BuildConfig::Development)
						{
							user.build = Build::Plugin_Development;
						}
						else if (buildType == BuildType::Plugin && buildConfig == BuildConfig::Production)
						{
							user.build = Build::Plugin_Production;
						}
						else if (buildType == BuildType::Module && buildConfig == BuildConfig::Development)
						{
							user.build = Build::Module_Development;
						}
						else if (buildType == BuildType::Module && buildConfig == BuildConfig::Production)
						{
							user.build = Build::Module_Production;
						}

						user.filePath = filePathParam;
					}
				}

				return user;
			}

			void StartUserMode(const User& user)
			{}
		};
	};
};