#include <iostream>

using namespace std;
void getinput1(int *);
void getinput2(int &);

int main()
{
	int num;
	getinput1(&num);
	cout << num << endl;
	getinput2(num);
	cout << num << endl;
}
void getinput1(int *ptr)
{
	cin >> *ptr;
}
void getinput2(int &ptr) // int &ptr = num;
{
	cin >> ptr;
}