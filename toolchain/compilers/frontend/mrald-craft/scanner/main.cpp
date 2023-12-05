
#include "license.hpp"
#include "scanner.hpp"

int main(int argc, char* argv[])
{
	//You must join the license to all toolchain executables
	Mrald::Craft::License();

	//Starting scan
	Mrald::Craft::Scan(argc, argv);
	return 0;
}