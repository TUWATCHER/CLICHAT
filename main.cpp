#include <iostream>
#include "Menu.h"


int main()
{

    while (!Terminator)
    {
        if (HasLoggedIn)
        {
            UserMenu();
        }
        else
        {
            LoginMenu();
        }
    }

    return 0;
}

