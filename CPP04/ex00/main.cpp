/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:43:24 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/17 15:16:18 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete i;
//     delete j;
//     delete meta;
//     return 0;
// }

int main() {
    std::cout << "=====CONSTRUCTORS TESTS=====" << std::endl;
    const Animal* Generic = new Animal();
    const Animal* Dogi = new Dog();
    const Animal* Cati = new Cat();
    
    std::cout << "=====BASIC TESTS=====" << std::endl;
    // Get type of Animal via Getter
    std::cout << std::endl;
    std::cout << "Type of Animal: " << Generic->getType() << std::endl; 
    std::cout << "Type of Animal: " << Dogi->getType() << std::endl;
    std::cout << "Type of Animal: " << Cati->getType() << std::endl;
    std::cout << std::endl;

    // makeSound deverie de la classe Animal
    std::cout << "Sound of Generic : " << std::endl;
    Generic->makeSound();
    std::cout << std::endl;

    std::cout << "Sound of Dog : " << std::endl;
    Dogi->makeSound();
    std::cout << std::endl;
    
    std::cout << "Sound of Cat : " << std::endl;
    Cati->makeSound();
    std::cout << std::endl;
    
    std::cout << "=====TESTS CTOR COPY OPERATOR ANIMAL=====" << std::endl;
    // Animal CTOR/COPY/OPERATOR
    const Animal* AnimalOperator;
    const Animal* AnimalCtor = new Animal("AnimalCtor");
    const Animal* AnimalCopy(AnimalCtor);

    std::cout << "Sound of Animal Ctor: " << std::endl;
    AnimalCtor->makeSound();
    std::cout << std::endl;
    
    std::cout << "Sound of Animal Copy" << std::endl;
    AnimalCopy->makeSound();
    std::cout << std::endl;
    
    AnimalOperator = Generic;
    std::cout << "Sound of Animal Operator: " << std::endl;
    AnimalOperator->makeSound();
    std::cout << std::endl;
    
    std::cout << "=====TESTS CTOR COPY OPERATOR DOG=====" << std::endl;
    // DOG CTOR/COPY/OPERATOR
    
    const Animal* DogOperator;
    const Animal* DogCtor = new Dog("DogCtor");
    const Animal* DogCopy(DogCtor);
    
    std::cout << "Sound of Dog Ctor: " << std::endl;
    DogCtor->makeSound();
    std::cout << std::endl;
    
    std::cout << "Sound of Dog Copy" << std::endl;
    DogCopy->makeSound();
    std::cout << std::endl;
    
    DogOperator = Dogi;
    std::cout << "Sound of Dog Operator: " << std::endl;
    DogOperator->makeSound();
    std::cout << std::endl;

    std::cout << "=====TESTS CTOR COPY OPERATOR CAT=====" << std::endl;
    // CAT CTOR/COPY/OPERATOR

    const Animal* CatOperator;
    const Animal* CatCtor = new Cat("CatCtor");
    const Animal* CatCopy(CatCtor);
    
    std::cout << "Sound of Cat Ctor: " << std::endl;
    CatCtor->makeSound();
    std::cout << std::endl;
    
    std::cout << "Sound of Cat Copy" << std::endl;
    CatCopy->makeSound();
    std::cout << std::endl;
    
    CatOperator = Cati;
    std::cout << "Sound of Cat Operator: " << std::endl;
    CatOperator->makeSound();
    std::cout << std::endl;

    
    std::cout << "=====TESTS DESTRUCTORS=====" << std::endl;
    delete CatCtor;
    delete DogCtor;
    delete AnimalCtor;
    delete Cati;
    delete Dogi;
    delete Generic;
    return 0;
}