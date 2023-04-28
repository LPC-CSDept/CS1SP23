
#include <iostream>
#include <string>
using namespace std;

int splitwords(string, char);
int findnumchars(string);

int main()
{
	string txt1("ABCDEF,GHI,JKLMN,OP");
	string txt2("BACDGABCDAZ");
	char delimiter = ',';
	int result;

	result = splitwords(txt1, delimiter);
	cout << "The number of substring " << result << endl;

	result = findnumchars(txt2);
	cout << "The number of unique letters " << result << endl;
}

int findnumchars(string txt)
{
	int seen[26] = {0};
	int index, cnt = 0;
	string::iterator iter;
	for (iter = txt.begin(); iter != txt.end(); iter++)
	{
		index = *iter - 'A';
		seen[index] += 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (seen[i] == 1)
			cnt += 1;
	}
	return cnt;
}

int splitwords(string txt1, char delimiter)
{
	int start, end, cnt = 0;
	string sub;
	start = 0;
	while ((end = txt1.find(delimiter, start)) != string::npos)
	{
		sub = txt1.substr(start, end - start);
		start = end + 1;
		cout << sub << endl;
		cnt += 1;
	}
	sub = txt1.substr(start, txt1.size() - start);
	cnt += 1;
	cout << sub << endl;
	return cnt;
}