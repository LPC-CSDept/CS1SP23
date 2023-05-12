#include <iostream>
using namespace std;

int main()
{
	int num1 = 10;
	int num2 = 20;
	int *ptr;
	// ptr is the pointer var.
	// ptr must have the address of another variable.

	ptr = &num1; // ptr has memory address of the var 'num'.

	// How to get the indirect(referencing) value
	cout << *ptr << endl; // 1) value of num 10
	cout << ptr << endl;  // 2) address of num 1000

	ptr = &num2;
	cout << *ptr << endl; // 3) value of num2 20
	cout << ptr << endl;  // 4) address of num2 1004

	num2 = 100;
	cout << *ptr << endl; // 5) value of num2 100
	cout << ptr << endl;  // 6) address of num2 1004
}