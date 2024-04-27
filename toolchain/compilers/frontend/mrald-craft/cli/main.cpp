
#include "cli.hpp"
#include "cli_args.hpp"
#include "license.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain binaries
    Mrald::Craft::License();

    //Collecting args
    Mrald::Craft::CLI::Args args(argc, argv);

    //Starting cli with args
    Mrald::Craft::CLI::StartCLI(args);
    return 0;
}
