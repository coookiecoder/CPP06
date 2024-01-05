#include "Base.hpp"
#include <iostream>

Base::~Base(void) {}

A::A(void) {
	std::cout << "A class generated" << std::endl;
}

B::B(void) {
	std::cout << "B class generated" << std::endl;
}

C::C(void) {
	std::cout << "C class generated" << std::endl;
}
