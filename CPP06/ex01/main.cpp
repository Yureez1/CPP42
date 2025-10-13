/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:42:19 by julien            #+#    #+#             */
/*   Updated: 2025/10/13 10:13:27 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

int main() {
    try {
        Data data;
        data.id = 1;
        data.name = "Random";
        data.score = 42.42;

        std::cout << "Original Data address: " << &data << std::endl;

        uintptr_t raw = Serializer::serialize(&data);
        std::cout << "Serialized value (uintptr_t): " << raw << std::endl;

        Data* ptr = Serializer::deserialize(raw);
        std::cout << "Deserialized address: " << ptr << std::endl;

        if (ptr != &data)
            throw (std::runtime_error("Deserialization failed: pointer mismatch"));

        std::cout << "\n✅ Serialization successful!" << std::endl;
        std::cout << "Data content after deserialization:" << std::endl;
        std::cout << "  id: " << ptr->id << std::endl;
        std::cout << "  name: " << ptr->name << std::endl;
        std::cout << "  score: " << ptr->score << std::endl;

        ptr->score += 0.58;
        std::cout << "\nAfter update via deserialized pointer:" << std::endl;
        std::cout << "  data.score = " << data.score << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << " Exception caught: " << e.what() << std::endl;
        return 1;
    }
}
