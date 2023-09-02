/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:12:34 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:35 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


//member access contol 
class DiamondTrap: public ScavTrap, public FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(std::string name);
        DiamondTrap &operator=(const DiamondTrap &);
        DiamondTrap(const DiamondTrap &);

};


#endif