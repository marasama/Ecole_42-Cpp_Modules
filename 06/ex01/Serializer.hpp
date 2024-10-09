#pragma once

#include <iostream>
#include <stdint.h>

struct
{
	std::string s1;
}typedef Data;

class Serializer
{
	public:
		Serializer();
		Serializer(Serializer const & src);
		Serializer & operator=(Serializer const & rhs);
		~Serializer();

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};