/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:03:35 by julien            #+#    #+#             */
/*   Updated: 2025/10/12 19:08:35 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cstdlib>
# include <iomanip>
# include <cmath>
# include <cctype>

class ScalarConverter {

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);
    ~ScalarConverter();

    enum e_type {
        TYPE_CHAR,
        TYPE_INT,
        TYPE_FLOAT,
        TYPE_DOUBLE,
        TYPE_PSEUDO_FLOAT,
        TYPE_PSEUDO_DOUBLE,
        TYPE_INVALID,
    };

    static bool isOnlySpace(std::string const& str);
    static bool hasAnySpace(std::string const& str);

    static bool isChar(std::string const& str);
    static bool isInt(std::string const& str);
    static bool isFloat(std::string const& str);
    static bool isDouble(std::string const& str);
    static bool isPseudoFloat(std::string const& str);
    static bool isPseudoDouble(std::string const& str);
    static bool isInvalid(std::string const& str);

    static e_type detectType(std::string const& str);

public:
    static void convert(std::string const& literal);
};


#endif
