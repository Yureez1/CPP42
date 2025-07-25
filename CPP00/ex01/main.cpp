/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:25 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/25 15:10:53 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){

    Phonebook PhoneBook;

    PhoneBook.printTable();
    std::string command;
    while (true)
    {
        std::cout << "Enter a command [ADD], [SEARCH], [EXIT]: ";
        std::getline(std::cin, command);
        if (command == "ADD" || command == "add")
            return 0;
        else if (command == "SEARCH" || command == "search")
            return 0;
        else if (command == "EXIT" || command == "exit")
            break ;
    }
    
    return 0;
}