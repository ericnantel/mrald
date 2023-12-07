
#include "cli_args.hpp"

namespace Mrald
{
	namespace Craft
	{
		namespace CLI
		{
			Args::Args(int argc, char* argv[])
				: Super()
			{
				reserve((size_t)argc);
				for (auto argi = 0U; argi < (size_t)argc; ++argi)
				{
					std::string_view arg(argv[argi]);
					push_back(arg);
				}
			}

			size_t Args::Size() const
			{
				return size();
			}

			Args::Super::const_reference Args::At(size_t argi) const
			{
				return at(argi);
			}
		};
	};
};