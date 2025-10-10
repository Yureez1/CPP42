/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:03:33 by julien            #+#    #+#             */
/*   Updated: 2025/10/10 14:45:55 by jbanchon         ###   ########.fr       */
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

bool ScalarConverter::isChar(std::string const& str) {
    if (str.length() == 3 && str[0] == '\'' && str[2] == '\'' && std::isprint(str[1])) {
        return true;
    }
    else if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]) && str[0] != '-' && str[0] != '+') {
        return true;
    }
    return false;
}

bool ScalarConverter::isInt(std::string const& str) {
    if (str.empty())
        return false;

    size_t i = 0;
    if (str[i] == '+' || str[i] == '-')
        i++;
    if (i == str.length())
        return false;
    for (;i < str.length(); i++) {
        if (!std::isdigit(static_cast<unsigned char>(str[i])))
            return false;
    }
    return true;
}

bool ScalarConverter::isFloat(std::string const& str) {

}
bool ScalarConverter::isDouble(std::string const& str) {

}
bool ScalarConverter::isPseudoFloat(std::string const& str) {

}
bool ScalarConverter::isPseudoDouble(std::string const& str) {

}

bool ScalarConverter::isInvalid(std::string const& str) {

}

ScalarConverter::e_type ScalarConverter::detectType(std::string const& str) {

}



void ScalarConverter::convert(std::string const& literal) {
    if (literal.empty() || isOnlySpace(literal)) {
        std::cout << "Error: empty input or input contains space!" << std::endl;
        return;
    }

}
