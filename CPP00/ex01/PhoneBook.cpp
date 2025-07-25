/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:29 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/25 17:15:21 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook( void ) : contactCount(0), oldestIndex(0){

    // std::cout << "Phonebook Constructor Called" << std::endl;    
    return ;

}

void Phonebook::addContact() {
    
    contacts[currentIndex].setInfo();

    if (contactCount < 8)
        contactCount++;

    currentIndex = (currentIndex + 1) % 8;
}

void Phonebook::searchContacts() {

    if (contactCount == 0) {
        std::cout << "No contacts to display." << std::endl;
        return;
    }

    for (int i = 0; i < contactCount; i++) {
        
        std::cout << std::setw(10) << i << "|" 
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|" 
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|" 
                  << std::setw(10) << truncate(contacts[i].getNickname()) << std::endl;

    }
    
    std::string input;
    std::cout << "Enter an index to display contact info: ";
    std::getline(std::cin, input);
    if (input.empty())
        return ;

    int index = std::atoi(input.c_str());
    if (index >= 0 && index < contactCount) {
        contacts[index].displayFullContact();
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

std::string truncate(std::string str) {
    
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void Phonebook::printTable(){

    std::cout << '+'; 
    for (int i = 0; i < 5; i++){
        std::cout << std::string(10, '-') << '+';
    }
    std::cout << std::endl;
    
    std::cout << std::right 
              << '|' << std::setw(10) << "FirstName" 
              << '|' << std::setw(10) << "LastName" 
              << '|' << std::setw(10) << "NickName" 
              << '|' << std::setw(10) << truncate("PhoneNumber") 
              << '|' << std::setw(10) << truncate("DarkestSecret") 
              << '|' << std::endl;
    
    std::cout << '+';
    for (int i = 0; i < 5; i++) {
        std::cout << std::string(10, '-') << '+';
    }
    std::cout << std::endl;
    return ;
}

Phonebook::~Phonebook( void ){
    
    // std::cout << "Phonebook Destructor Called" << std::endl;
    return;
    
}