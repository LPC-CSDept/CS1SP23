#include <iostream>
using namespace std;

int main()
{
	char email[] = "john@company.com\0";

	cout << email << endl;
	cout << email[5] << endl;
	printf(" %s \n", email + 5);
}