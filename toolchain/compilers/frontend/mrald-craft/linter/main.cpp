
#include "license.hpp"
#include "linter.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain executables
    Mrald::Craft::License();

    //Starting linter
    Mrald::Craft::Lint(argc, argv);
    return 0;
}
