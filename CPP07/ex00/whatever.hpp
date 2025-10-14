/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:41:53 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/14 15:25:52 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

class Whatever {
private:

public:

template <typename T>
    static void swap(T &v1, T &v2){
        T v3;

        v3 = v1;
        v1 = v2;
        v2 = v3;
    }

template <typename N>
    static N min(N n1, N n2) {
        return (n1 < n2 ? n1 : n2);
    }

template <typename N>
    static N max(N n1, N n2) {
        return (n1 > n2 ? n1 : n2);
    }

};
#endif
