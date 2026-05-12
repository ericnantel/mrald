
#include "license.hpp"
#include "formatter.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain binaries
    Mrald::Craft::License::StartLicense();

    //Starting formatter
    Mrald::Craft::Formatter::StartFormatter(argc, argv);
    return 0;
}
