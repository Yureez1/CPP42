/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:55:22 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/22 15:55:59 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main(void) {
    try {

        std::cout << "=====TEST easyfind in vector container=====" << std::endl;
        std::cout << std::endl;

        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);

        std::cout << "vec easyfind : " << *easyfind(vec, 20) << std::endl;
        std::cout << std::endl;

        std::cout << "=====TEST easyfind in list container=====" << std::endl;
        std::cout << std::endl;

        std::list<int> lst;
        lst.push_back(15);
        lst.push_back(25);
        lst.push_back(35);
        std::cout << "lst easyfind : " << *easyfind(lst, 35) << std::endl;
        std::cout << std::endl;

        std::cout << "=====TEST easyfind in list container=====" << std::endl;
        std::cout << std::endl;

        std::cout << "=====TEST easyfind exception=====" << std::endl;
        std::cout << std::endl;

        std::cout << "lst easyfind : " << *easyfind(lst, 45) << std::endl; // exception here
        
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
