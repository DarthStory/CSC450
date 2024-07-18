//============================================================================
// Name        : Hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


int a, b = 5;



int main() {

	auto a = 8;
	auto b = 12345678901;
	auto c = 3.14f;
	auto d = 3.14;
	auto e = true;
	auto f = 'd';

//	bool my_flag;
//	a = 7;
//	my_flag = false;
//	cout << "a = " << a << endl; // prints Hello World!!!
//	cout << "b = " << b << endl;
//	cout << "flag = " << my_flag << endl;
//	my_flag = true;
//	cout << "flag = " << my_flag << endl;
//	cout << "a-b = " << a-b << endl;
//	cout << "a+b = " << a+b << endl;
//	unsigned int positive;
//	positive = b - a;
//	cout << "b-a (unsigned) = " << positive << endl;

	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	std::cout << typeid(c).name() << std::endl;
	std::cout << typeid(d).name() << std::endl;
	std::cout << typeid(e).name() << std::endl;
	std::cout << typeid(f).name() << std::endl;


	return 0;
}
