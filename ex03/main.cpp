/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:12:26 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:27 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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