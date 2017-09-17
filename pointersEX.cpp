// pointerEX.cpp
// James Mock
// COSC 2030
// 2017-09-16
// Demonstration of pointers

#include<iostream>
using std::cout;
using std::endl;

void triple(int&, int&);

int main()
{
	int num1 = 0;
	int num2 = 9;
	int *ptr1;
	int *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl << endl;
	cout << "When ptr1 = &num1, ptr1 = " << ptr1 << " and *ptr1 = " << *ptr1 << endl;
	cout << "When ptr2 = &num2, ptr2 = " << ptr2 << " and *ptr2 = " << *ptr2 << endl << endl;
	
	num1 = 5;
	*ptr2 = 7;
	
	cout << "If num1 = 5, then ptr1 = " << ptr1 << " and *ptr1 = " << *ptr1 << endl;
	cout << "If *ptr2 = 7, then num2 = " << num2 << " and ptr2 = " << ptr2 << endl << endl;
	
	cout << "To return multiple values from one function use pointers.\n";
	cout << "triple(*ptr1, *ptr2) called." << endl<< "Result:\n";
	 
	triple(*ptr1, *ptr2);

	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;



	return 0;
}

void triple(int& a, int& b)
{
	a = 3*a;
	b = 3*b;

	return;
}