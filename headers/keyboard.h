#ifndef KEYBOARD
#define KEYBOARD
#include "cat.h"

extern void debug(std::string s);

namespace Keyboard{
    void ProcessKeyboard(sf::RenderWindow &window, Cat &player);
}

#endif /* end of include guard: KEYBOARD */
