/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:11:59 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:00 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap{
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &t);
        ScavTrap &operator=(const ScavTrap &t);
        ~ScavTrap();
        void attack(std::string const& target);
        void    guardGate();
    private:
};

#endif