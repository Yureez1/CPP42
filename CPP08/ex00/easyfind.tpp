/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:55:24 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/17 14:52:16 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void easyfind(T& arg, int index) {

    auto it = std::find(arg.begin(), arg.end(), index);
    if (it == arg.end()) {
        throw std::exception();
    } else {
        return it;
    }
}
