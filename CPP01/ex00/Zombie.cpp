/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:09:15 by jbanchon          #+#    #+#             */
/*   Updated: 2025/08/18 18:09:14 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unamed") {}

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed" << std::endl;
}

void Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name)
{
    this->_name = name;
}