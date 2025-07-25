/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:59:57 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/25 17:18:03 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {

    // std::cout << "Constructor Contact Called" << std::endl;
    return ;
    
}    

bool is_alpha(const std::string &str) {
    
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++) {
        
        char c = str[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
            return false;
    }
    return true;
}

bool is_digit(const std::string &str) {
    
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++) {
        
        char c = str[i];
        if (c < '0' || c > '9')
            return false;
            
    }
    return true;
}

static std::string getFirstName() const {
    
}

static std::string getLastName() const {
    
}

static std::string getNickname() const {
    
}


static std::string prompt(const std::string &field) {
    
    std::string input;
    
    while (true)
    {
        std::cout << field << ": ";
        std::getline(std::cin, input);
        
        if (!input.empty())
            break;
        std::cout << "This field cannot be empty";
    }
    
    return input;    
}

bool Contact::isEmpty() const {
    return FirstName.empty();
}

void Contact::setInfo() {

    FirstName = prompt("First Name");
    LastName = prompt("Last Name");
    NickName = prompt("Nickname");
    PhoneNumber = prompt("Phone Number");
    DarkestSecret = prompt("Darkest Secret");
}

void Contact::displayFullContact() const {

    std::cout << "First Name : " << FirstName << std::endl;
    std::cout << "Last Name : " << LastName << std::endl;
    std::cout << "Nickname : " << NickName << std::endl;
    std::cout << "Phone Number : " << PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
    return ;
}

Contact::~Contact( void ) {
    
    // std::cout << "Destructor Contact Called" << std::endl;
    return ;
    
}