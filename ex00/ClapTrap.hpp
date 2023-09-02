/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:13:25 by sbadr             #+#    #+#             */
/*   Updated: 2023/09/02 12:59:12 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

    #include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int health;
        int energy;
        int dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &);
        ClapTrap &operator=(const ClapTrap& t);
        std::string getName();
        void setName(std::string newName);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif