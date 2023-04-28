
#include <iostream>
#include <string>
using namespace std;

// int splitwords(string, char);
// int findnumchars(string);

int main()
{
	string txt1("ABCDEF,GHI,JKLMN,OP");
	string txt2("BACDGABCDAZ");
	int result;
	char delimiter = ',';

	result = txt1.find(',');
	string sub = txt1.substr(result + 1, 3);
	cout << result << endl;
	cout << sub << endl;

	//     result = splitwords(txt1, delimiter);
	//     result = findnumchars(txt2);
}
