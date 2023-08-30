#include "ClapTrap.hpp"

int main()
{
    ClapTrap killer("A");
    ClapTrap killer_("B");

    killer_.takeDamage(2);
    killer_.attack("B");
    killer.takeDamage(2);
    killer.attack("B");

}