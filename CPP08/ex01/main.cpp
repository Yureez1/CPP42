/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:56:54 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/29 18:41:51 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "===== TEST : Subject main =====" << std::endl;
    std::cout << std::endl;

    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp << std::endl;

    std::cout << "shortest : " << sp.shortestSpan() << std::endl;
    std::cout << "longest : " << sp.longestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << "===== TEST : add multiple numbers  =====" << std::endl;
    std::cout << std::endl;

    Span sp2 = Span(26);
    sp2.addMultipleNumber(25, 50);
    std::cout << sp2 << std::endl;

    std::cout << "shortest : " << sp2.shortestSpan() << std::endl;
    std::cout << "longest : " << sp2.longestSpan() << std::endl;

    try {
        std::cout << std::endl;
        std::cout << "===== TEST : Span is full exception =====" << std::endl;
        std::cout << std::endl;

        Span s = Span(50);
        s.addMultipleNumber(500, 1000);
    } catch(std::exception& e) {
        std::cout << "exception caught " << e.what() << std::endl;
    }
    return 0;
}
