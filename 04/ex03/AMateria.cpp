#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Abstract materia has been created\n";
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "Abstract materia has been constructed\n";
}

AMateria::~AMateria()
{
	std::cout << "Abstract materia has been destroyed\n";
}

AMateria::AMateria(AMateria const &ref) : _type(ref._type)
{
	std::cout << "Abstract materia has been constructed from a copy\n";
}

std::string const & AMateria::getType() const
{
	return(this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
