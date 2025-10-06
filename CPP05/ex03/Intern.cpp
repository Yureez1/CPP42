/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:41:18 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/06 17:06:34 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern Defaut Constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
    (void)other;
    std::cout << "Intern Copy Constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern Destructor called" << std::endl;
}

AForm* Intern::makeForm(AForm& form, std::string& target) const {
    
}

const char* Intern::UnknownFormException::what() const throw() {
    return "Intern: unknown form name";
}



