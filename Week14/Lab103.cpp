#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool idcheck(char[]);
bool domaincheck(char[]);

int main()
{
	char email[50];

	cout << "Enter your email \n";
	cin >> email; // John@company.com

	if (idcheck(email))
		cout << "ID check passed\n";
	if (domaincheck(email))
		cout << "Domain check passed\n";
}

bool idcheck(char email[])
{
	int idlen = 0;
	int i = 0;

	if (!isalpha(email[0]))
		return false;
	while (email[idlen++] != '@')
	{
		if (!isalnum(email[idlen]))
			return false;
		idlen += 1;
	}
	if (idlen > 10)
		return false;

	return true;
}
bool domaincheck(char email[])
{
	char domain[] = "com edu org net";
	int i;
	char *ptr;

	// email string : john@company.hr.com
	// domname = "com";

	for (i = strlen(email) - 1; i >= 0; i--)
	{
		if (email[i] == '.')
			break;
	}
	ptr = strstr(domain, email + i + 1);
	if (ptr != NULL)
		return true;
	else
		return false;

	// domname(ex, edu) from email string
	// domname is a substring of domain
	// strstr(domain, domname)
}
