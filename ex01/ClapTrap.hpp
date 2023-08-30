#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

    #include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int health;
        int energy;
        int dmg;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap& t);
        std::string getName();
        void setName(std::string newName);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif