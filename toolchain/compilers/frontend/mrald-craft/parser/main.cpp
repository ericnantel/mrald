
#include "license.hpp"
#include "parser.hpp"

int main(int argc, char* argv[])
{
    //You must join the license to all toolchain binaries
    Mrald::Craft::License();

    //Starting parser
    Mrald::Craft::Parser::StartParser(argc, argv);
    return 0;
}
