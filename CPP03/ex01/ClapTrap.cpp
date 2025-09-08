/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:45:28 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/08 18:48:01 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) 
: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << this->_name << " CREATING CREATURE!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << this->_name << " AUTO-DESTRUCTION ABORT!" << std::endl;
}


void ClapTrap::attack(const std::string& target) {
    
    if (this->_energy_points > 0 && this->_hit_points) {
        std::cout << this->_name 
                  << " : attacks " << target 
                  << ", causing " << this->_attack_damage 
                  << " points of damage!" << std::endl;
        this->_energy_points--;
    }
    else {
        if (this->_energy_points <= 0)
            std::cout << "No more energy points!" << std::endl;
        if (this->_hit_points <= 0)
            std::cout << "Enemy is dead, I repeat, enemy is dead!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (this->_hit_points == 0) {
        std::cout << this->_name << " is already dead!" << std::endl;
        return ;
    }
    
    std::cout << this->_name << " takes " << amount << " damage!" << std::endl;

    if (amount >= this->_hit_points)
        this->_hit_points = 0;
    else
        this->_hit_points -= amount;
    
    std::cout << this->_name << " now has " << this->_hit_points << " HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energy_points > 0 && this->_hit_points > 0) {
        std::cout << this->_name << " repairs " << amount << " HP!" << std::endl;
        this->_hit_points += amount;
        this->_hit_points--;
        std::cout << this->_name << " now has " << this->_hit_points << " HP and " << this->_energy_points << " EP." << std::endl;
    }
    else {
        if (this->_energy_points <= 0)
            std::cout << "No more energy points!" << std::endl;
        if (this->_hit_points <= 0)
            std::cout << "Enemy is dead, I repeat, enemy is dead!" << std::endl;
    }
}
