/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:12:32 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:33 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap& FragTrap ::operator=(const FragTrap &t)
{
    this->name = t.name;
    this->health = t.health;
    this->energy = t.energy;
    this->dmg = t.dmg;
    std::cout << "FragTrap copy assignement oprator called"<<std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout<< "FragTrap Destructor call!\n";
}

FragTrap::FragTrap(const FragTrap &t)
{
    *this = t;

    std::cout<< "FragTrap copyConstructor call\n";
}

FragTrap:: FragTrap(std::string name):ClapTrap(name)
{
    health = 100;
    energy = 100;
    dmg = 30;
    std::cout<< "FragTrap constructor call\n";
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "high fives guys!!\n";
}
