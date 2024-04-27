
#include "license.hpp"
#include "linter.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain binaries
    Mrald::Craft::License();

    //Starting linter
    Mrald::Craft::Linter::StartLinter(argc, argv);
    return 0;
}
