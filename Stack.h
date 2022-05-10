#ifndef _STACK_H_
#define _STACK_H_
#include "Library.h"
class Stack
{
private:
	int* data;
	int size;
public:
	Stack(int size);
	Stack(const Stack& other);
	~Stack();
	void show();
	void operator=(const int value);
	void operator/=(const int value);
	void operator-=(const int value);
	void operator==(const int value);
	void operator-(const int value);
	void operator/(const int value);
	void operator!();
	friend std::ostream& operator<<(std::ostream& out, const Stack& object);
	friend std::istream& operator>>(std::istream& in, Stack& object);
};
std::ostream& operator<<(std::ostream& out, const Stack& object);
std::istream& operator>>(std::istream& in, Stack& object);
#endif // !_STACK_H_