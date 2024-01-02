#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

int ft_isalpha(std::string string)
{
	int i = 0;

	while (string[i])
	{
		if (!(string[i] >= '0' && string[i] <= '9') && string[i] != '.')
			if (!(string[i] == 'f' && string[i + 1] == '\0'))
				return (1);
		i++;
	}
	return (0);
}

void ScalarConverter::convert(std::string string) {
	if (string == "-inff" || string == "-inf")
	{
        std::cout << "char : nope" << std::endl;
		std::cout << "int : -inf" << std::endl;
		std::cout << "float : -inff" << std::endl;
		std::cout << "double : -inf" << std::endl;
	}
	else if (string == "+inff" || string == "+inf")
	{
			std::cout << "char : nope" << std::endl;
			std::cout << "int : +inf" << std::endl;
			std::cout << "float : +inff" << std::endl;
			std::cout << "double : +inf" << std::endl;
	}
	else if (string == "nan")
	{
			std::cout << "char : nope" << std::endl;
			std::cout << "int : nope" << std::endl;
			std::cout << "float : nanf" << std::endl;
			std::cout << "double : nan" << std::endl;
	}
	else if (ft_isalpha(string))
	{
		if (string.size() < 2)
		{
			std::cout << "char : " << string << std::endl;
			std::cout << "int : " << atoi(string.c_str()) << std::endl;
			std::cout << "float : " << atoi(string.c_str()) << ".0f" << std::endl;
			std::cout << "double : " << atoi(string.c_str()) << ".0" << std::endl;
		}
		else
		{
			std::cout << "char : nope" << std::endl;
			std::cout << "int : nope" << std::endl;
			std::cout << "float : nope" << std::endl;
			std::cout << "double : nope" << std::endl;
		}
	}
	else
	{
		if ((char) atoi(string.c_str()) > 32 && (float) atof(string.c_str()) == (int) atof(string.c_str()))
				std::cout << "char : " << (char) atoi(string.c_str()) << std::endl;
		else
			std::cout << "char : nope" << std::endl;
		std::cout << "int : " << atoi(string.c_str()) << std::endl;
		if ((float) atof(string.c_str()) == (int) atof(string.c_str()))
			std::cout << "float : " << atoi(string.c_str()) << ".0f" << std::endl;
		else
			std::cout << "float : " << (float) atof(string.c_str()) << "f" << std::endl;
		if (atof(string.c_str()) == (int) atof(string.c_str()))
			std::cout << "double : " << atoi(string.c_str()) << ".0" << std::endl;
		else
			std::cout << "double : " << (float) atof(string.c_str()) << std::endl;
	}
}