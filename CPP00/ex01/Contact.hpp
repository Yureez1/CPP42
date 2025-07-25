/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:59:38 by jbanchon          #+#    #+#             */
/*   Updated: 2025/07/25 15:05:48 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact {

private:

    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
public:

    Contact( void );
    ~Contact( void );

    void setInfo();
    bool isValid();
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    void displayFullContact() const;
    
};


#endif