/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:32 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/24 15:42:08 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class Phonebook {

private:

    Contact contacts[8];
    int     contactCount;
    int     oldestIndex;
    
public:

    Phonebook( void );
    ~Phonebook( void );
    
    void addContact();
    void searchContacts();
    void printTable();
    
};

#endif