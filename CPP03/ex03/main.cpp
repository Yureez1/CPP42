/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:18:38 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/09 14:48:23 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void) {

	ClapTrap a("T-800");
	
	a.attack("Alexandre");
	a.takeDamage(5);
	a.beRepaired(3);
	a.takeDamage(5);
	a.takeDamage(5);
	a.takeDamage(5);

    std::cout << std::endl;

    ScavTrap b("T-999");
    
    b.attack("Alexandre");
    b.beRepaired(5);
    b.takeDamage(3);
    b.takeDamage(105);      
    b.guardGate();

    std::cout << std::endl;
    
    FragTrap c("T-9999");
    
    c.attack("Alexandre");
    c.takeDamage(5);
    c.takeDamage(100);
    c.highFivesGuys();

    std::cout << std::endl;
    
    DiamondTrap d("T-99999");
    d.attack("Alexandre");
    d.takeDamage(5);
    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();
    d.takeDamage(100);
    
	return 0;
}