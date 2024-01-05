#include <iostream>
#include "Serialize.hpp"

int main(void)
{
	Data data = {10, "UwU"};
	Data *buffer;
	buffer = Serialize::deserialize(Serialize::serialize(&data));
	std::cout << buffer->data_char << " " << buffer->data_int << std::endl;
}
