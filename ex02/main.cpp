/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:13:13 by sbadr             #+#    #+#             */
/*   Updated: 2023/09/02 17:20:09 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap wakanda("wakanda");
    FragTrap isparta("isparta");
	FragTrap *traitor = new FragTrap(wakanda);

	std::cout<<std::endl;
	wakanda.highFiveGuys();
	isparta.highFiveGuys();
	traitor->highFiveGuys();
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