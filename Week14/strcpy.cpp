#include <iostream>
#include <cstring>
using namespace std;

void strmycpy(char[], char[]);
int main()
{
	char src[] = "Source cstring";
	char dest[50];

	strcpy(dest, src);
	strmycpy(dest, src);
	cout << dest << endl;
}
void strmycpy(char dest[], char src[])
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
}
