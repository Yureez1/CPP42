/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:03:33 by julien            #+#    #+#             */
/*   Updated: 2025/10/08 17:57:29 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
    std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    (void)other;
    std::cout << "ScalarConverter Copy Constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter Destructor called" << std::endl;
}

bool ScalarConverter::isOnlySpace(std::string const& str) {
    for(size_t i = 0; i < str.length(); i++) {
        if (!(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))) {
            return false;
        }
    }
    return true;
}

int ScalarConverter::detectType(std::string const& str) {
    
}

void ScalarConverter::convert(std::string const& literal) {
    if (literal.empty() || isOnlySpace(literal)) {
        std::cout << "Error: empty input or input contains space!" << std::endl;
        return;
    }

}
