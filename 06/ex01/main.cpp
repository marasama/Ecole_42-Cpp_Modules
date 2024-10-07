#include <iostream>
#include <string>
#include "Serializer.hpp"

int main()
{
    Data str = {"Hello World!"};

    std::cout << "original: " << str.s1 << std::endl;

    uintptr_t serialized_ptr = Serializer::serialize(&str);

    std::cout << "serialized: " << serialized_ptr << std::endl;

    Data *ptr = Serializer::deserialize(serialized_ptr);

    std::cout << "deserialized: " << ptr->s1 << std::endl;

    return (0);
}
