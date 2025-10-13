/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:18:09 by julien            #+#    #+#             */
/*   Updated: 2025/10/13 11:21:08 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

int main() {
    for (int i = 0; i < 5; i++){
        Base* p = generate();
        std::cout << "identify(Base*): ";
        identify(p);
        std::cout << "identify(Base&): ";
        identify(*p);
        delete p;
        std::cout << "----\n";
    }

    std::cout << "identify(Base* nullptr): ";
    identify(static_cast<Base*>(0));
    return 0;
}
