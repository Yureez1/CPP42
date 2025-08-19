/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:22:32 by jbanchon          #+#    #+#             */
/*   Updated: 2025/08/18 19:03:19 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return 0;

    Zombie* horde = new(std::nothrow) Zombie[N];
    if (!horde)
        return 0;

    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }
    return horde;
}

