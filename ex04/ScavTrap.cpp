/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:11:08 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:11:09 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    health = 100;
    energy = 50;
    dmg = 20;

    std::cout << "ScavTrap " << this->name << " added." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &t)
{
    *this = t;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &t)
{
    this->name = name;
    this->health = health;
    this->energy = energy;
    this->dmg = dmg;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->energy <= 0 ) {
        std::cout << " out of energy." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target <<"causing " << this->dmg << " points of damage !" << std::endl;
    this->energy -= 1;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " GateKeeper mode On." << std::endl;
}