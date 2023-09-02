/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:13:13 by sbadr             #+#    #+#             */
/*   Updated: 2023/09/02 12:34:00 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap wakanda("wakanda");
    ClapTrap isparta("isparta");
	ClapTrap *traitor = new ClapTrap(wakanda);

	std::cout << std::endl;

	wakanda.attack("isparta");
	isparta.attack("wakanda");
	traitor->attack("wakanda");

	std::cout << std::endl;

	wakanda.takeDamage(80);
	isparta.takeDamage(5);
	isparta.takeDamage(5);
	isparta.takeDamage(1);
	traitor->takeDamage(9);

	std::cout << std::endl;

	wakanda.beRepaired(100);
	isparta.beRepaired(1);
	traitor->beRepaired(5);

	std::cout << std::endl;

	delete traitor;
}