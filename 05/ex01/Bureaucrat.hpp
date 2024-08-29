/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:29:15 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/29 15:29:16 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Form.hpp"
// classes

class Form;

class Bureaucrat
{
	private:
		const std::string _name;
		size_t _grade;

	public:
	// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(int grade);
		Bureaucrat(const std::string name);
		Bureaucrat(const std::string name, int grade);

	// Deconstructors
		~Bureaucrat();

	// Overloaded Operators
		Bureaucrat &operator=(const Bureaucrat &src);

	// Public Methods
		void incrementGrade(void);
		void decrementGrade(void);
		void signForm(Form &form);
	// Getter
		const std::string getName(void)const;
		size_t getGrade(void)const;
		void setGrade(int grade);

	//Exceptions
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

// ostream Overload
std::ostream	&operator<<(std::ostream &o, Bureaucrat *a);
