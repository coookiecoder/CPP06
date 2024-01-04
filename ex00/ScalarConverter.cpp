#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int ft_isalpha(std::string string)
{
	int i = 0;

	while (string[i])
	{
		if (!(string[i] >= '0' && string[i] <= '9') && string[i] != '.' && string[i] != '-' && string[i] != '+')
			if (!(string[i] == 'f' && string[i + 1] == '\0'))
				return (1);
		i++;
	}
	return (0);
}

void ScalarConverter::convert(std::string string) {
	if (string == "-inff" || string == "-inf")
	{
		std::cout << "char : nope can't be displayed" << std::endl;
		std::cout << "int : nope" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
	else if (string == "+inff" || string == "+inf")
	{
			std::cout << "char : nope can't be displayed" << std::endl;
			std::cout << "int : nope" << std::endl;
			std::cout << "float : +inff" << std::endl;
			std::cout << "double : +inf" << std::endl;
	}
	else if (string == "nan")
	{
			std::cout << "char : nope can't be displayed" << std::endl;
			std::cout << "int : nope" << std::endl;
			std::cout << "float : nanf" << std::endl;
			std::cout << "double : nan" << std::endl;
	}
	else if (ft_isalpha(string))
	{
		if (string.size() < 2)
		{
			std::cout << "char : " << string << std::endl;
			std::cout << "int : " << static_cast<int>(string[0]) << std::endl;
			std::cout << "float : " << static_cast<float>(string[0]) << ".0f" << std::endl;
			std::cout << "double : " << static_cast<double>(string[0]) << std::endl;
		}
		else
		{
			std::cout << "char : nope it's a string" << std::endl;
			std::cout << "int : nope" << std::endl;
			std::cout << "float : nope" << std::endl;
			std::cout << "double : nope" << std::endl;
		}
	}
	else
	{
		if (std::atoi(string.c_str()) > 32 && std::atoi(string.c_str()) < 127 && std::atof(string.c_str()) == std::atoi(string.c_str()))
			std::cout << "char : " << static_cast<char>(std::atoi(string.c_str())) << std::endl;
		else
			std::cout << "char : nope can't be displayed" << std::endl;

		std::cout << "int : " << static_cast<int>(std::atoi(string.c_str())) << std::endl;

		if (std::atof(string.c_str()) == std::atoi(string.c_str()))
		{
			std::cout << "float : " << static_cast<float>(std::atof(string.c_str())) << ".0f" << std::endl;
			std::cout << "double : " << static_cast<double>(std::atof(string.c_str())) << ".0" << std::endl;
		}
		else
		{
			std::cout << "float : " << static_cast<float>(std::atof(string.c_str())) << "f" << std::endl;
			std::cout << "double : " << static_cast<double>(std::atof(string.c_str())) << std::endl;
		}
	}
}
