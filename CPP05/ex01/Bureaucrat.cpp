/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbanchon <jbanchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 13:27:18 by jbanchon          #+#    #+#             */
/*   Updated: 2025/09/27 19:30:58 by jbanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string& name, unsigned int grade) : _name(name), _grade(grade) {
    if (_grade < 1) {
        throw GradeTooHighException();
    }
    if (_grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "Bureaucrat default constructor called" << std::endl 
    << "Name: " << _name << std::endl 
    << "Grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    if (_grade < 1) {
        throw GradeTooHighException();
    }
    if (_grade > 150) {
        throw GradeTooLowException();
    }
    std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

unsigned int Bureaucrat::getGrade() const {
    return _grade;
}

std::string Bureaucrat::getName() const {
    return _name;
}

void Bureaucrat::decrementGrade() {
    if (_grade < 150) {
        _grade++;
    }
    else {
        throw GradeTooLowException();
    }
}

void Bureaucrat::incrementGrade() {
    if (_grade > 1)
        _grade--;
    else {
        throw GradeTooHighException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
    out << b.getName() << ", Bureaucrat Grade: " << b.getGrade();
    return out;
}

void Bureaucrat::signForm(Form& form) const {
    try {
        form.beSigned(*this);
        std::cout << _name << " signed " << form << std::endl;
    } catch (const std::exception& f) {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << f.what() << std::endl;
    }
}