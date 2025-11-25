/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:37:51 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/25 14:53:52 by jbanchon         ###   ########.fr       */
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

        for (size_t j = 0; j < arg.size(); j++) {
            if (!std::isdigit(arg[j])) {
                std::cerr << "Error: non-numeric argument" << std::endl;
                exit(EXIT_FAILURE);
            }
        }
        long val = std::atol(argv[i]);
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

    // for (int i = 0; i < jacobsthal.size(); i++) {
    //     i++;
    // }
    int last_elem = 1;
    while (last_elem < n) {
        int next_val = jacobsthal.back() + (2 * jacobsthal[jacobsthal.size() - 2]);
        jacobsthal.push_back(next_val);
        last_elem = next_val;
    }
    return jacobsthal;
}

std::vector<int> PmergeMe::buildInsertionSequence(std::vector<int>& jacobsthal, int n) {

    (void) jacobsthal;
    std::vector<int> seq;

    if (n < 1)
        return seq;

    for (int i = 3; i < n; ++i) {

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

void PmergeMe::_sortVector(std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return;
    }

    int straggler = -1;
    bool has_straggler = false;

    if (arr.size() % 2 != 0) {
        straggler = arr.back();
        arr.pop_back();
        has_straggler = true;
    }

    std::vector<std::pair<int, int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) {
        int first = arr[i];
        int second = arr[i + 1];

        if (first > second)
            pairs.push_back(std::make_pair(first, second));
        else
            pairs.push_back(std::make_pair(second, first));
    }
    std::vector<int> main_chain;
    for (size_t i = 0; i < pairs.size(); i++)
        main_chain.push_back(pairs[i].first);

    _sortVector(main_chain);

    std::vector<int> pendulous;
    for (size_t i = 0; i < main_chain.size(); i++) {
        for (size_t j = 0; j < pairs.size(); j++) {
            if (pairs[j].first == main_chain[i]) {
                pendulous.push_back(pairs[j].second);
                break;
            }
        }
    }
    main_chain.insert(main_chain.begin(), pendulous[0]);
    std::vector<int> jacobsthal = generateJacobsthal(pendulous.size() - 1);
    std::vector<int> sequence = buildInsertionSequence(jacobsthal, pendulous.size() - 1);

    for (size_t i = 0; i < sequence.size(); i++) {
        int idx = sequence[i];
        int valueToInsert = pendulous[idx];

        int limitValue = main_chain[0];

        for (size_t k = 0; k < pairs.size(); k++) {
            if (pairs[k].second == valueToInsert) {
                limitValue = pairs[k].first;
                break;
            }
        }
        std::vector<int>::iterator limitIt = std::find(main_chain.begin(), main_chain.end(), limitValue);
        std::vector<int>::iterator pos = binarySearch(main_chain, valueToInsert, limitIt);
        main_chain.insert(pos, valueToInsert);
    }
    if (has_straggler) {
        std::vector<int>::iterator pos = binarySearch(main_chain, straggler, main_chain.end());
        main_chain.insert(pos, straggler);
    }
    arr = main_chain;
}

// void PmergeMe::_sortList(std::list<int>& arr) {

// }

void PmergeMe::run(int argc, char **argv) {

    parseArgs(argc, argv);

    std::cout << "Before : ";
    for (int i = 1; i < argc; ++i)
        std::cout  << _vector[i] << " ";
    std::cout << std::endl;

    // Sort

    clock_t start = clock();
    _sortVector(_vector);

    std::cout << "After : ";
    for (int i = 1; i < argc; ++i)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;

    clock_t end = clock();
    double time = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector " << time << " us" << std::endl;
}


