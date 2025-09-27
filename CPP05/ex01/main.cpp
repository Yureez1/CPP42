/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:27:27 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/27 19:22:59 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    
    Bureaucrat* c = 0;
    try {
        std::cout << "=====CREATING BUREAUCRAT TESTS=====" << std::endl;
        std::cout << std::endl;
        
        Bureaucrat a("Leanne", 1);
        std::cout << std::endl;
        
        Bureaucrat b("Alexandre", 150);
        std::cout << std::endl;
        
        c = new Bureaucrat("Seyf", 2);
        std::cout << std::endl;

        // UNCOMMENT TO CATCH THE ERROR MESSAGE
        
        // Bureaucrat d("Ilyana", 0);
        // std::cout << std::endl;

        // UNCOMMENT TO CATCH THE ERROR MESSAGE
        
        // Bureaucrat e("Soraya", 151);
        // std::cout << std::endl;

        // UNCOMMENT TO CATCH THE ERROR MESSAGE
        
        // std::cout << "=====BUREAUCRAT SUPERIOR TO GRADE 1 TEST=====" << std::endl;
        // a.incrementGrade();
        // std::cout << a << std::endl;

        // UNCOMMENT TO CATCH THE ERROR MESSAGE
        
        // std::cout << "=====BUREAUCRAT INFERIOR TO GRADE 150 TEST=====" << std::endl;
        // b.decrementGrade();
        // std::cout << b << std::endl;
        
        // TRY TO PROMOTE POINTER =/= ERROR bc GRADE < 1
        
        // std::cout << *c << std::endl;
        // c->incrementGrade();
        
        // PROMOTING BUREAUCRAT TO BETTER GRADE : 150 IS LOWEST
        std::cout << "=====PROMOTE BUREAUCRAT TESTS=====" << std::endl;
        std::cout << std::endl;
        b.incrementGrade();
        std::cout << b << std::endl;
        std::cout << std::endl;
    
        // DOWNGRADING BUREAUCRAT TO LOWER GRADE : 1 IS HIGHEST
        std::cout << "=====DOWNGRADE BUREAUCRAT TESTS=====" << std::endl;
        std::cout << std::endl;
        
        a.decrementGrade();
        std::cout << a << std::endl;
        std::cout << std::endl;
        
        std::cout << "=====COPY AND OPERATOR TESTS=====" << std::endl;
        std::cout << std::endl;

        Bureaucrat f = a;
        std::cout << f << std::endl;

        std::cout << std::endl;
        
        Bureaucrat g(b);
        std::cout << g << std::endl;

        
        std::cout << "=====FORM CONSTRUCTOR TESTS=====" << std::endl;
        std::cout << std::endl;
        
        Form f1("Contract", 50, 20);
        std::cout << std::endl;
        
        Form f2("Top Secret", 1, 1);
        std::cout << std::endl;
        
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << std::endl;

        std::cout << "=====CAN SIGNFORM TESTS=====" << std::endl;
        std::cout << std::endl;
        
        a.signForm(f1);
        a.incrementGrade();
        std::cout << a << std::endl;
        a.signForm(f2);
        std::cout << std::endl;
               
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << std::endl;

        c->signForm(f1);
        c->signForm(f1);
        std::cout << f1 << std::endl;
        std::cout << std::endl;

        std::cout << "=====CANNOT SIGNFORM TESTS=====" << std::endl;
        std::cout << std::endl;

        b.signForm(f1);
        std::cout << b << std::endl;
        b.signForm(f2);
        std::cout << std::endl;

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << std::endl;
        
        std::cout << "=====DESTRUCTOR TESTS=====" << std::endl;
        std::cout << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error detected : " << e.what() << std::endl;
    }
    delete c;
    return 0;
}