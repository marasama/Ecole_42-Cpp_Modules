/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adurusoy <adurusoy@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 19:01:55 by adurusoy          #+#    #+#             */
/*   Updated: 2024/08/29 22:26:41 by adurusoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Constructors
AForm::AForm(void): _name("default"), _is_signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

AForm::AForm(const AForm &src): _name(src.getName() + "_copy"), _is_signed(false), _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	std::cout << "Form Copy Constructor called to copy " << src.getName() <<
	" into " << this->getName() << std::endl;
	*this = src;
}

AForm::AForm(int sign_grade, int exec_grade): _name("default"), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(AForm::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(AForm::GradeTooHighException());
}

AForm::AForm(const std::string name): _name(name), _is_signed(false), _sign_grade(150), _exec_grade(150)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << this->getSignGrade() <<
	" and execution-grade of " << this->getExecGrade() << std::endl;
}

AForm::AForm(const std::string name, int sign_grade, int exec_grade): _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form Constructor called for " << this->getName() <<
	" with sign-grade of " << sign_grade << " and execution-grade of " << exec_grade <<
	std::endl;
	const int i = this->getSignGrade();
	const int j = this->getExecGrade();
	if (i > 150 || j > 150)
		throw(AForm::GradeTooLowException());
	else if( i < 1 || j < 1)
		throw(AForm::GradeTooHighException());
}

// Deconstructors
AForm::~AForm()
{
	std::cout << "Form Deconstructor for " << this->getName() << " called" << std::endl;
}

// Overloaded Operators
AForm &AForm::operator=(const AForm &src)
{
	std::cout << "Form Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	//nothing to assign in this class
	return *this;
}

// Public Methods
void AForm::beSigned(Bureaucrat const &signer)
{
	if ((int)signer.getGrade() > this->getSignGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->getIsSignedBool() == false)
	{
		this->_is_signed = true;
		std::cout << this->getName() << " was signed by " << signer.getName() << std::endl;
	}
	else
		std::cout << this->getName() << " is already signed" << std::endl;
}

// Getter
const std::string	AForm::getName(void)const
{
	return (this->_name);
}

const std::string	AForm::getIsSigned(void)const
{
	if (this->_is_signed)
		return ("✓ true");
	else
		return ("✗ false");
}

bool	AForm::getIsSignedBool(void)const
{
	return (this->_is_signed);
}

int	AForm::getSignGrade(void)const
{
	return (this->_sign_grade);
}

int	AForm::getExecGrade(void)const
{
	return (this->_exec_grade);
}

// Setter

// Exceptions
const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

const char *AForm::FormNotSignedException::what(void) const throw()
{
	return ("Form needs to be signed before executing");
};

// ostream Overload
std::ostream	&operator<<(std::ostream &o, AForm *a)
{
	o << "Form " << a->getName() <<
	":\n\tsign-grade:\t" << a->getSignGrade() <<
	"\n\texec-grade:\t" << a->getExecGrade() <<
	"\n\tis signed:\t" << a->getIsSigned() <<
	std::endl;
	return (o);
}
