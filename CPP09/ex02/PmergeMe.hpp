/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:37:53 by jbanchon          #+#    #+#             */
/*   Updated: 2025/11/24 17:52:02 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include <limits>
#include <ctime>
#include <iomanip>

class PmergeMe {

private:
    std::vector<int> _vector;
    std::list<int> _list;

    void _sortVector(std::vector<int>& arr);
    void _insertInVector(std::vector<int>& mainChain, int element);

    void _sortList(std::list<int>& arr);

public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void parseArgs(int argc, char **argv);

    std::vector<int> generateJacobsthal(int n);
    std::vector<int> buildInsertionSequence(std::vector<int>& jacobsthal, int n);

    std::vector<int>::iterator binarySearch(std::vector<int>& main_chain, int target, std::vector<int>::iterator limit);

};


#endif
