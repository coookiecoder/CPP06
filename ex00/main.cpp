#include "ScalarConverter.hpp"

#include <iostream>
#include <stdexcept>

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
	ScalarConverter::convert("200");
	std::cout << std::endl;
	ScalarConverter::convert("2147483647");
	std::cout << std::endl;

	ScalarConverter::convert("-42.2f");
	std::cout << std::endl;
	ScalarConverter::convert("-42.0f");
	std::cout << std::endl;
	ScalarConverter::convert("-42");
	std::cout << std::endl;
	ScalarConverter::convert("*");
	std::cout << std::endl;
	ScalarConverter::convert("-20");
	std::cout << std::endl;
	ScalarConverter::convert("-200");
	std::cout << std::endl;
	ScalarConverter::convert("-2147483648");
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

	/*
	ScalarConverter test;
	test.convert("a");
	*/
}
