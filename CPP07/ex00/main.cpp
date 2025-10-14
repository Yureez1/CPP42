/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:41:55 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/14 14:04:13 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {

    int a = 2;
    int b = 3;

    Whatever::swap( a, b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << Whatever::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << Whatever::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    Whatever::swap(c, d);

    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << Whatever::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << Whatever::max( c, d ) << std::endl;
    return 0;
}
