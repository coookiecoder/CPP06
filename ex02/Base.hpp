#ifndef BASE_HPP
# define BASE_HPP

class Base {
	public:
		virtual ~Base(void);
};

class A : public Base {public: A(void);};
class B : public Base {public: B(void);};
class C : public Base {public: C(void);};

#endif
