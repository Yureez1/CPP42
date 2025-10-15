/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:15:54 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/15 12:13:58 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <string>
#include <iostream>


template<typename T>
static void iter(T* p1, size_t p2, void(*fn)(T&)) {
    if (!p1)
        return ;
    for (size_t i = 0; i < p2; i++) {
        fn(p1[i]);
    }
}

template<typename T>
static void iter(const T* p1, size_t p2,  void(*fn)(const T&)) {
    if (!p1)
        return ;
    for (size_t i = 0; i < p2; i++) {
        fn(p1[i]);
    }
};

#endif
