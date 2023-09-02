/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:13:23 by sbadr             #+#    #+#             */
/*   Updated: 2023/09/02 17:10:47 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unknown"),health(10),energy(10),dmg(0)
{
    std::cout << "default constructor call" << std::endl;
}

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
    if (this->energy)
        --this->energy;
    else
    {
        std::cout << this->name << " don't have enough energy!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << dmg << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this ->health <= 0)
        return ;
    this->health -= amount;
    std::cout<<this->name << " has taken " << amount << " dmg"<< std::endl;
    if (health <= 0)
    {
        std::cout <<  name << " isDead" << std::endl;
        return ;
    }
    this->dmg = amount;
}

std::string ClapTrap::getName()
{
    return (this->name);
}

void ClapTrap::setName(std::string newName)
{
    this->name = newName;
}       

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->health > 0)
        std::cout << this->name << " restored " << amount << " HP\n";
    if (energy)
        --this->energy;
    else
    {
        std::cout << this->name << " don't have enough energy!!" << std::endl;
        return ;
    }
    this->health += amount;
}

