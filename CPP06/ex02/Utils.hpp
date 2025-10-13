/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 10:29:08 by julien            #+#    #+#             */
/*   Updated: 2025/10/13 10:32:09 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
