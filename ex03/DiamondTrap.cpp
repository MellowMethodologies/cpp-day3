/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:12:38 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:39 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap &DiamondTrap ::operator=(const DiamondTrap &t)
{
    this->ClapTrap::name = t.ClapTrap::name;
    this->name = t.name;
    this->health = t.health;
    this->energy = t.energy;
    this->dmg = t.dmg;
    std::cout << "DiamondTrap copy assignement oprator called"<<std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<< "DiamondTrap destructor call\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &t)
{
    *this = t;

    std::cout<< "DiamondTrap copyConstructor call\n";
}

DiamondTrap:: DiamondTrap(std::string name)
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->health = FragTrap::health;
    this->energy = ScavTrap::energy;
    this->dmg = FragTrap::dmg;
    std::cout<< "DiamondTrap constructor call\n";
}
