#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

typedef unsigned long long int uintptr_t;

typedef struct Data {
	int		data_int;
	char	data_char[4];
}	Data;

class Serialize {
	private:
		Serialize(void);
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data	*deserialize(uintptr_t raw);
};

#endif
