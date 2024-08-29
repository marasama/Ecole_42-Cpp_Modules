/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:06:20 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/29 23:45:11 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

// classes

// class Form;
// class PresidentialPardonForm;
// class RobotomyRequestForm;
// class ShrubberyCreationForm;

class Intern
{
	private:
		// Private Members

	public:
	// Constructors
		Intern();
		Intern(const Intern &src);

	// Deconstructors
		~Intern();

	// Overloaded Operators
		Intern &operator=(const Intern &src);

	// Public Methods
		AForm *makeForm(const std::string form, const std::string target);
	// Getter

	// Setter

};