/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:29 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/24 16:45:34 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook( void ) : contactCount(0), oldestIndex(0){

    std::cout << "Constructor Called" << std::endl;
    
    return ;

}

Phonebook::~Phonebook( void ){
    
    std::cout << "Destructor Called" << std::endl;
    return;
    
}