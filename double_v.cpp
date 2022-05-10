#include <iostream>
#include "double_v.h"
#include <ctime>
#include <locale>

using namespace std;

double_v::double_v() : value(0) {};
double_v::double_v(double V) : value(V) {};
double_v::double_v(const double_v& old) {
	this->value = old.value;// Ęîíńňđóęňîđ čěĺíîâŕííűé 
}

double& double_v::at() {  // Äë˙ číčöčŕëčöčč äŕííűő
	return this->value;
}

double& double_v::operator!() { return value *= -1; }

double_v operator++(double_v& old) { //ďđĺôčęńíŕ˙ äđóćĺńňâĺííŕ˙ óâĺëč÷ĺíčĺ âńĺő ďîëĺé íŕ íŕčěĺíüřĺĺ
	setlocale(LC_ALL, "Rus");
	double_v tmp(old);
	extern double mn;
	double a;
	a = mn;
	old.value += a;
	cout << "Đĺçóëüňŕň : " << old << endl;
	return tmp.value;
}

double_v operator++(double_v& old, int) { // ďîńňôčęńíŕ˙ äđóćĺńňâĺííŕ˙ ôóíęöč˙
	setlocale(LC_ALL, "Rus");
	double_v tmp(old);
	double a = 0;
	cout << "Ââĺäčňĺ íŕ ęŕęîĺ ÷čńëî óâĺëč÷čňü : ";
	cin >> a;
	old.value += a;
	cout << "Đĺçóëüňŕň : " << old.value << endl;
	return tmp.value;
}

double_v& double_v::operator--() {
	setlocale(LC_ALL, "Rus");
	extern double mx;
	double a = mx;
	this->value -= a;
	cout << "Đĺçóëüňŕň : " << this->value << endl;
	return *this;
}

double_v& double_v::operator--(int) {
	setlocale(LC_ALL, "Rus");
	double a;
	cout << "Ââĺäčňĺ íŕ ęŕęîĺ ÷čńëî óěĺíüřčňü : ";
	cin >> a;
	this->value -= a;
	cout << "\nĐĺçóëüňŕň : " << this->value << endl;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const double_v& tmp) {
	out << tmp.value;
	return out;
}

double_v operator+(double_v& old) { 
	setlocale(LC_ALL, "Rus");
	extern double mn;
	if (mn >= old.value)
		mn = old.value;
	return mn;
}
double_v operator-(double_v& old) { 
	setlocale(LC_ALL, "Rus");
	extern double mx;
	if (mx <= old.value)
		mx = old.value;
	return mx;
}
