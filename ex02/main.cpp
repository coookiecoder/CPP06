#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

Base *generate(void)
{
	int value = rand() % 3;

	if (value == 0)
		return (new A);
	if (value == 1)
		return (new B);
	if (value == 2)
		return (new C);
	return (0);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A class (ptr)" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B class (ptr)" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C class (ptr)" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "A class (ref)" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "B class (ref)" << std::endl;
	}
	catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "C class (ref)" << std::endl;
	}
	catch (std::exception &e) {}
}

int main(void) {
	std::srand(std::time(0));

	Base *buffer;

	for (int iteration = 0; iteration < 10; iteration++)
	{
		buffer = generate();
		identify(buffer);
		identify(*buffer);
		delete buffer;
	}
}
