#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	this->type = "WrongCat";
	std::cout << "|WrongCat: " << this->type << "| Default costructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& otherWrongCat)
{
	std::cout << "|WrongCat: " << this->type << "| Copy costructor called" << std::endl;
	(*this) = otherWrongCat;
}


WrongCat &WrongCat::operator=(const WrongCat& otherWrongCat)
{
	std::cout << "|WrongCat: " << this->type << "| Operator overload called" << std::endl;
	this->type = otherWrongCat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "|WrongCat: " << this->type << "| Default destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "|WrongCat: " << this->type << "| Meow meow" << std::endl;
}

