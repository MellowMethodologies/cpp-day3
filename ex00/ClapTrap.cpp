#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name),health(10),energy(10),dmg(0){
    std::cout << "default constructor call" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "destuctor call" << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap &t){
    *this = t;
    std::cout<< "copy constructor called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &t){
    std::cout<< "copy assignment operator called" <<std::endl;
	this->dmg = t.dmg;
    this->health = t.health;
    this->energy = t.energy;
    this->name = t.name;
	return(*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (energy)
        --this->energy;
    else
    {
        std::cout << "not enough energy!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << target << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (health <= (int)amount)
    {
        std::cout << "ClapTrap" << name << "isDead" << std::endl;
        return ;
    }
    health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy)
        --this->energy;
    else
    {
        std::cout << "not enough energy!!" << std::endl;
        return ;
    }
    this->health = amount;
}
