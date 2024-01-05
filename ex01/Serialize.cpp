#include "Serialize.hpp"

typedef unsigned long long int uintptr_t;

uintptr_t Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
