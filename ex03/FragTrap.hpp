/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbadr <sbadr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 01:12:56 by sbadr             #+#    #+#             */
/*   Updated: 2023/08/31 01:12:57 by sbadr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap
{
    private:

    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &t);
        FragTrap &operator=(const FragTrap &);
        ~FragTrap();
        void highFiveGuys(void);
};


#endif