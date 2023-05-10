// Condition for the email string.
// start with the alphabet.
// ID characters are all alpha numerics characters
// the last string shoud be one of the list {com, edu, org, and net}

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int idcheck(string);
int domaincheck(string);
int emailcheck(string);

int emailcheck(string email)
{
	int flag;
	flag = 1;
	if (!idcheck(email))
		flag = 0;

	if (!domaincheck(email))
		flag = 0;
	return flag;
}
int idcheck(string email)
{
	int retidx;
	if (!isalpha(email[0]))
		return 0;

	retidx = email.find('@');
	if (retidx == string::npos)
		return 0;

	for (int i = 0; i < retidx; i++)
		if (!isalnum(email[i]))
			return 0;

	if ((retidx <= 5) || (retidx >= 15))
		return 0;
	return 1;
}
int domaincheck(string email)
{
	int retidx, lastidx;
	string domainstr[] = {"com", "edu", "net", "org"};
	string dom;
	retidx = 0;
	while (retidx != string::npos)
	{
		lastidx = retidx;
		retidx = email.find('.', retidx + 1);
	}
	dom = email.substr(lastidx + 1, email.size() - lastidx);
	int flag = 0;
	for (int i = 0; i < 4; i++)
	{
		if (domainstr[i] == dom)
			flag = 1;
	}
	return flag;
}