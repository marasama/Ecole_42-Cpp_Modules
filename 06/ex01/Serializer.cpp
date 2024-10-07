#include "Serializer.hpp"

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serializer::Serializer(Serializer const & src)
{
	*this = src;
}
Serializer &Serializer::operator=(Serializer const & rhs)
{
	if (this != &rhs)
		*this = rhs;	
	return *this;
}

Serializer::Serializer()
{
	std::cout << "Serializer created" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destroyed" << std::endl;
}
