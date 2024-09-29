/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:02:10 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/29 22:35:43 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

// classes

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _is_signed;
		const int _sign_grade;
		const int _exec_grade;

	public:

		// Constructors
		AForm(int sign_grade, int exec_grade);
		AForm(void);
		AForm(const std::string name, int sign_grade, int exec_grade);
		AForm(const std::string name);
	// Copy Constructor
		AForm(const AForm &src);

	// Deconstructors
		virtual ~AForm();

	// Overloaded Operators
		AForm &operator=(const AForm &src);
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

	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	// Public Methods
		void beSigned(Bureaucrat const &signer);
		virtual void execute(Bureaucrat const &executor)const = 0;
	// Getter
		const std::string getName(void)const;
		const std::string getIsSigned(void)const;
		bool getIsSignedBool(void)const;
		int getSignGrade(void)const;
		int getExecGrade(void)const;
};

// ostream Overload
std::ostream	&operator<<(std::ostream &o, AForm *a);
