/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:37:51 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/24 20:10:35 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {

    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parseArgs(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        for (size_t j = 0; j < arg.length(); j++) {
            if (!isdigit(arg[j])) {
                std::cerr << "Error: non-numeric argument" << std::endl;
                exit(EXIT_FAILURE);
            }
        }

        long val = std::atol(arg.c_str());
        if (val > std::numeric_limits<int>::max() || val < 0) {
            std::cerr << "Error: integer overflow or negative" << std::endl;
            exit(EXIT_FAILURE);
        }

        _vector.push_back(static_cast<int>(val));
        _list.push_back(static_cast<int>(val));
    }
}

std::vector<int> PmergeMe::generateJacobsthal(int n) {
    std::vector<int> jacobsthal;

    jacobsthal.push_back(0);
    jacobsthal.push_back(0);

    for (int i; i < jacobsthal.size(); i++) {
        i++;
    }
    int last_elem = 1;
    while (last_elem < n) {
        int next_val = jacobsthal.back() + (2 * jacobsthal[jacobsthal.size() - 2]);
        jacobsthal.push_back(next_val);
        last_elem = next_val;
    }
    return jacobsthal;
}

std::vector<int> PmergeMe::buildInsertionSequence(std::vector<int>& jacobsthal, int n) {
    std::vector<int> seq;

    if (n < 1)
        return seq;

    for (size_t i = 3; i < n; ++i) {

        int upper = seq[i];
        int lower = seq[i - 1];

        if (upper > n)
            upper = n;

        for (int val = upper; val > lower; --val)
            seq.push_back(val);

        if (upper == n)
            break;
    }
    return seq;
}

std::vector<int>::iterator PmergeMe::binarySearch(std::vector<int>& main_chain, int target, std::vector<int>::iterator limit) {
    return std::lower_bound(main_chain.begin(), limit, target);
}









