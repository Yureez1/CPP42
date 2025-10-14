/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:15:54 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/14 16:16:09 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

class Iter {

private:

public:

    template<typename T>
    static void iter(T* p1, size_t p2, void(*fn)(T&)) {
        for (size_t i; i < p2; i++) {
            fn(p1[i]);
        }
    }

    template<typename T>
    static void iter(const T* p1, size_t p2, const void(*fn)(T&)) {
        for (size_t i; i < p2; i++) {
            fn(p1[i]);
        }
    }
};

#endif
