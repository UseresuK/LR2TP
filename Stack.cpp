#include "Stack.h"
using namespace std;
Stack::Stack(int size) // ����������� � ����������
{
	this->size = size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		data[i] = rand() % 100;
}
Stack::Stack(const Stack& other) // ����������� �����������
{
	this->size = other.size;
	this->data = new int[other.size];
	for (int i = 0; i < other.size; i++)
		this->data[i] = other.data[i];
}
Stack::~Stack() // ����������
{
	delete[] data;
}
void Stack::show()
{
	cout << fixed;
	for (int i = 0; i < size; i++)
	{
		cout << setprecision(4) << data[i] << " ";
	}
	cout << endl;
}
void Stack::operator=(const int value) // �������� ������������
{
	for (int i = 0; i < size; i++)
	{
		data[i] = value;
	}
}
void Stack::operator==(const int value) // �������� ���������
{
	for (int i = 0; i < size; i++)
	{
		if (data[i] == value)
			cout << data[i] << "==" << value << endl;
		else if (data[i] < value)
			cout << data[i] << "<" << value << endl;
		else if (data[i] > value)
			cout << data[i] << ">" << value << endl;
	}
}
void Stack::operator-=(const int value)
{
	for (int i = 0; i < size; i++)
	{
		data[i] -= value;
	}
}
void Stack::operator/=(const int value)
{
	for (int i = 0; i < size; i++)

	{
		data[i] /= value;
	}
}
void Stack::operator!() // !
{
	for (int i = 0; i < size; i++)
	{
		data[i] *= (-1);
	}
}
void Stack::operator-(const int value) // �������� ���������
{
	for (int i = 0; i < size; i++)
	{
		data[i] -= value;
	}
}
void Stack::operator/(const int value) // �������� �������
{
	for (int i = 0; i < size; i++)
	{
		data[i] /= value;
	}
}
ostream& operator<<(ostream& out, const Stack& object) // ����� �����
{
	cout << fixed;
	for (int i = 0; i < object.size; i++)
	{
		out << setprecision(4) << object.data[i] << " ";
	}
	out << endl;
	return out;
}
istream& operator>>(istream& in, Stack& object) // ���� � ����
{
	for (int i = 0; i < object.size; i++)
	{
		in >> setprecision(4) >> object.data[i];
	}
	return in;
}