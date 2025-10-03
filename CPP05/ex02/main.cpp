/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 07:27:28 by jbanchon          #+#    #+#             */
/*   Updated: 2025/10/03 11:02:53 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>
#include <cstdlib>

int main() {
    // Initialisation du générateur aléatoire pour Robotomy
    srand(time(NULL));

    try {
        std::cout << "===== BUREAUCRATS CREATION =====" << std::endl;
        Bureaucrat high("HighRank", 1);
        Bureaucrat mid("MidRank", 50);
        Bureaucrat low("LowRank", 150);
        std::cout << std::endl;

        std::cout << "===== FORMS CREATION =====" << std::endl;
        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("Bender");
        PresidentialPardonForm pardon("Arthur Dent");
        std::cout << std::endl;

        std::cout << "===== SIGNING TESTS =====" << std::endl;
        low.signForm(shrub);     // échoue
        mid.signForm(shrub);     // réussit
        high.signForm(robot);    // réussit
        high.signForm(pardon);   // réussit
        std::cout << std::endl;

        std::cout << "===== EXECUTION TESTS =====" << std::endl;
        low.executeForm(shrub);  // échoue (grade trop bas)
        mid.executeForm(shrub);  // réussit → fichier <target>_shrubbery
        high.executeForm(robot); // aléatoire, succès ou échec
        high.executeForm(pardon);// succès garanti
        std::cout << std::endl;

        std::cout << "===== ALREADY SIGNED TEST =====" << std::endl;
        mid.signForm(shrub);     // échoue car déjà signé
        std::cout << std::endl;

        std::cout << "===== DESTRUCTOR TESTS =====" << std::endl;
    }
    catch (std::exception const& e) {
        std::cout << "Error detected: " << e.what() << std::endl;
    }

    return 0;
}
