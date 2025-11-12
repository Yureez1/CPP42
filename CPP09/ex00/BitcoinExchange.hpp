/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:44:01 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/12 16:51:08 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EXCHANGE
#define BTC_EXCHANGE

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>

class BitcoinExchange {

private:



public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange();

    bool check_file_extension(std::string &file) const;

};



#endif

