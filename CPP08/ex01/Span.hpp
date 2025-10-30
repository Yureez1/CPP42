/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:56:56 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/29 11:23:49 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span {
private:
    unsigned int _capacity;
    std::vector<int> _data;

public:
    Span(unsigned int n);
    Span(const Span& other);
    Span& operator=(const Span& other);
    ~Span();

    void addNumber(int n);

    void addMultipleNumber(int first, int last);

    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    unsigned int size() const;
    unsigned int capacity() const;
    std::vector<int>::const_iterator begin() const;
    std::vector<int>::const_iterator end() const;
};

std::ostream& operator<<(std::ostream& os, const Span& sp);

#endif
