
#include "license.hpp"
#include "cli.hpp"
#include "cli_args.hpp"


int main(int argc, char* argv[])
{
	//You must join the license to all toolchain executables
	Mrald::Craft::License();

	//Collecting args
	Mrald::Craft::CLI::Args args(argc, argv);

	//Starting cli with args
	Mrald::Craft::CLI::Start(args);
	return 0;
}