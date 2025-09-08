/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:45:39 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/08 19:31:23 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << this->_name << " CREATED as ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << this->_name << " DESTROYED" << std::endl;
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