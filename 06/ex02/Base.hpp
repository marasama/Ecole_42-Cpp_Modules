#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

class Base
{
    public:
        virtual ~Base();
        Base();
        Base(const Base &other);
        Base &operator=(const Base &other);
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
