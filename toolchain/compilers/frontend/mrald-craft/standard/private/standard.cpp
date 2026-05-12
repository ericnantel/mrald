
#include "standard.hpp"

namespace Mrald
{
    namespace Craft
    {
        namespace Standard
        {
            void GetVersion(unsigned& major, unsigned& minor, unsigned& patch)
            {
                major = 1;
                minor = 0;
                patch = 0;
            }

            void GetCodename(char (&codename)[64])
            {
                codename[0] = 'Q';
                codename[1] = 'u';
                codename[2] = 'a';
                codename[3] = 'r';
                codename[4] = 'k';
                codename[5] = 's';
                codename[6] = '\0';
            }
        }; //namespace Standard
    }; //namespace Craft
}; //namespace Mrald

