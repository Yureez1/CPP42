/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 12:06:20 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/12 16:52:19 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        std::string input = argv[1];

        BitcoinExchange btc;
        if (!btc.check_file_extension(input)) {
            std::cerr << "Error: File has to be .csv" << std::endl;
            return 1;
        }

        std::ifstream file(input);
        if (!file.is_open()) {
            std::cerr << "Error: Impossible to open file " << input  << std::endl;
            return 1;
        }
    }
    else {
        std::cerr << "Usage: ./btc <input_file>" << std::endl;
        return 1;
    }
    return 0;
}
