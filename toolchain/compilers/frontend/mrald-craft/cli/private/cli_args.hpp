
#ifndef MRALD_CRAFT_CLI_ARGS_HPP
#define MRALD_CRAFT_CLI_ARGS_HPP

#include <vector>
using std::vector;

#include <string_view>
using std::string_view;

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			struct Args : private std::vector<std::string_view>
			{
				using Super = std::vector<std::string_view>;

				Args() = delete;
				explicit Args(int argc, char* argv[]);

				size_t Size() const;

				const_reference At(size_t argi) const;
			};
		};
	};
};

#endif