
#include "license.hpp"
#include "parser.hpp"

int main(int argc, char* argv[])
{
	//You must join the license to all toolchain executables
	Mrald::Craft::License();

	//Starting parse
	Mrald::Craft::Parse(argc, argv);
	return 0;
}