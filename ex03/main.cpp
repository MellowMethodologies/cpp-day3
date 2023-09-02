/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:13:13 by sbadr             #+#    #+#             */
/*   Updated: 2023/09/02 17:40:20 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap wakanda("wakanda");
    DiamondTrap isparta("isparta");
	DiamondTrap *traitor = new DiamondTrap(wakanda);

	std::cout<<std::endl;
	wakanda.whoAmI();
	isparta.whoAmI();
	traitor->whoAmI();
	std::cout << std::endl;

	wakanda.attack("isparta");
	isparta.attack("wakanda");
	traitor->attack("wakanda");

	std::cout << std::endl;

	wakanda.takeDamage(80);
	wakanda.takeDamage(20);
	wakanda.takeDamage(20);
	isparta.takeDamage(5);
	isparta.takeDamage(5);
	isparta.takeDamage(10);
	traitor->takeDamage(9);

	std::cout << std::endl;

	wakanda.beRepaired(100);
	isparta.beRepaired(1);
	traitor->beRepaired(5);

	std::cout << std::endl;

	delete traitor;
}