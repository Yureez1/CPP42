/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:25 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/24 16:45:24 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Phonebook::printTable(){

    std::cout << '|' << std::setw(10) << "FirstName" << '|' << std::setw(10) << "LastName" << '|' << std::setw(10) << "NickName" << '|' << std::setw(10) << "PhoneNumber" << '|' << setw(10) << "DarkestSecret" << '|' << std::endl;
    return ;
    
}

int main(){

    
    return 0;    
}