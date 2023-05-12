#include <iostream>

using namespace std;

void printit1(int *);
void printit2(int []);
int main()
{
	int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printit1(number);
	printit2(number);
}
void printit1(int *ptr)
{
	for (int i = 0; i < 10; i++)
		cout << ptr[i] << endl;
}
void printit2(int ptr[])
{
	for (int i = 0; i < 10; i++)
		cout << *(ptr + i) << endl;
}