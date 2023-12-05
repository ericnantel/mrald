
#include "license.hpp"

#include <iostream>
using std::cout;

namespace Mrald
{
	namespace Craft
	{
		void License()
		{
			std::cout << "By continuing to use Mrald's toolchain, you agree to its license terms" << std::endl;
			std::cout << "Learn more at https://github.com/ericnantel/mrald/blob/master/LICENSE" << std::endl;
		}
	};
};