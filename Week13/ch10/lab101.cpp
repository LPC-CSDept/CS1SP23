
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool checklength(char[]);
bool checkdigit(char[]);
bool checklower(char[]);
bool checkupper(char[]);
bool checkspecial(char[]);

int main()
{
	char pwdstr[20];

	cout << "Enter your password\n";
	cin >> pwdstr;

	if (checklength(pwdstr) &&
	    checkdigit(pwdstr) &&
	    checklower(pwdstr) &&
	    checkupper(pwdstr) &&
	    checkspecial(pwdstr))
		cout << "Your password is strong\n";
	else
		cout << "Your password is not strong\n";
}
bool checklength(char pwdstr[])
{
	if (strlen(pwdstr) > 6)
		return true;
	return false;
}
bool checkdigit(char pwdstr[])
{
	// isdigit(pwdstr[i])
	for (int i = 0; i < strlen(pwdstr); i++)
	{
		if (isdigit(pwdstr[i]))
			return true;
	}
	return false;
}
bool checklower(char pwdstr[])
{
	for (int i = 0; i < strlen(pwdstr); i++)
	{
		if (islower(pwdstr[i]))
			return true;
	}
	return false;
}
bool checkupper(char pwdstr[])
{
	for (int i = 0; i < strlen(pwdstr); i++)
	{
		if (isupper(pwdstr[i]))
			return true;
	}
	return false;
}
bool checkspecial(char pwdstr[])
{
	for (int i = 0; i < strlen(pwdstr); i++)
		if (ispunct(pwdstr[i]))
			return true;
	return false;
}
