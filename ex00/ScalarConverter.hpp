#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>

class ScalarConverter {
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter &copy);
		ScalarConverter& operator=(ScalarConverter &copy);
		~ScalarConverter(void);
	public:
		static void convert(std::string string);
};

#endif
