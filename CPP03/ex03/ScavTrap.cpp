/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 12:18:40 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/09 12:33:12 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    
    std::cout << this->_name << " CREATED as ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    
    std::cout << "ScavTrap created as copy" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << this->_name << " DESTROYED as ScavTrap" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_energy_points > 0 && this->_hit_points > 0) {
        std::cout << "ScavTrap " << this->_name 
                  << " ferociously attacks " << target 
                  << ", causing " << this->_attack_damage 
                  << " points of damage!" << std::endl;
        this->_energy_points--;
    } else {
        std::cout << this->_name << " is too weak to attack." << std::endl;
        
    }
}

void ScavTrap::guardGate() {
    if (this->_energy_points > 0 && this->_hit_points > 0)
        std::cout << this->_name << " GATE KEEPER MODE ACTIVATED" << std::endl;
    else
        std::cout << this->_name << " is dead or no enough EP!" << std::endl;
}