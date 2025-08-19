/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 15:09:07 by jbanchon          #+#    #+#             */
/*   Updated: 2025/08/18 19:29:30 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    Zombie *z = newZombie("Foo");
    z->announce();
    delete z;

    randomChump("Bar");

    Zombie tmp;
    tmp.setName("Baz");
    tmp.announce();
    return 0;
}