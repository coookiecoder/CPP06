#include "ScalarConverter.hpp"
#include <iostream>

int main(void)
{
	ScalarConverter::convert("42.2f");
	std::cout << std::endl;
	ScalarConverter::convert("42.0f");
	std::cout << std::endl;
	ScalarConverter::convert("42");
	std::cout << std::endl;
	ScalarConverter::convert("*");
	std::cout << std::endl;
	ScalarConverter::convert("20");
	std::cout << std::endl;

	ScalarConverter::convert("-inff");
	std::cout << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << std::endl;
	ScalarConverter::convert("+inf");
	std::cout << std::endl;
	ScalarConverter::convert("nan");
	std::cout << std::endl;
}