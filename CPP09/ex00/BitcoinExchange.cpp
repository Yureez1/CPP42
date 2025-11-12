/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:44:04 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/12 16:48:47 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// Mandatory

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {

}

BitcoinExchange::~BitcoinExchange() {

}

// Parsing

bool BitcoinExchange::check_file_extension(std::string& file) const {

    size_t file_size = file.size();
    const std::string extension = ".csv";

    if (file_size < extension.size()) {
        return false;
    }

    std::string file_extension = file.substr(file_size - extension.size());
    if (file_extension == extension)
        return true;
    return false;
}

