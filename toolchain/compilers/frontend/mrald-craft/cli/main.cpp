
#include "license.hpp"
#include "cli.hpp"
#include "cli_args.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain binaries
    Mrald::Craft::License::StartLicense();

    //Collecting args
    Mrald::Craft::CLI::Args args(argc, argv);

    //Starting cli with args
    Mrald::Craft::CLI::StartCLI(args);
    return 0;
}
