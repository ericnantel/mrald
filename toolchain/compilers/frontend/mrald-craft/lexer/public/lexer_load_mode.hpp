#ifndef MRALD_CRAFT_LEXER_LOAD_MODE_HPP
#define MRALD_CRAFT_LEXER_LOAD_MODE_HPP

namespace Mrald
{
    namespace Craft
    {
        namespace Lexer
        {
            enum class LoadMode
            {
                Parsing = 0,
                Linting
            };
        }; //namespace Lexer
    }; //namespace Craft
}; //namespace Mrald

#endif
