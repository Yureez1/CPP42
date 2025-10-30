/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:17:13 by julien            #+#    #+#             */
/*   Updated: 2025/10/29 17:41:37 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "===== Test : TOP before =====" << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "===== Test : TOP after =====" << std::endl;
    std::cout << "top: " << mstack.top() << std::endl;

    std::cout << "===== Test : size before =====" << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << "===== Test : size after =====" << std::endl;
    std::cout << "size: " << mstack.size() << std::endl;

    std::cout << std::endl;

    std::cout << "===== Test : iterator =====" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++) {
        std::cout << "non const: " << *it << std::endl;
    }

    std::cout << std::endl;
    
    std::cout << "===== Test : const iterator =====" << std::endl;
    const MutantStack<int> cms = mstack;
    for (MutantStack<int>::const_iterator cit = cms.begin(); cit != cms.end(); cit++)
        std::cout << "const: " << *cit << ' ' << std::endl;
    return 0;
}
