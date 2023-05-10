#include <iostream>
#include <fstream>
using namespace std;

const int MAXSIZE = 5000;
struct Names
{
	string stname;
	string gender;
	int year;
	string name;
	int count;
};

// int makeRecord(Names[]);
// int printRecord(Names[], int, string);

int main()
{
	ifstream ifs;
	string line, field;
	int idx, start;

	ifs.open("allstates.txt");
	ifs >> line;
	cout << line;

	// 1st field Statename
	idx = line.find(',');
	field = line.substr(0, idx);
	cout << idx << endl;
	cout << field << endl;

	// 2nd field
	start = idx + 1;
	idx = line.find(',', idx + 1);
	cout << start << "\t" << idx << endl;
	field = line.substr(start, idx - start);
	cout << field << endl;
	// 3rd field
	start = idx + 1;
	idx = line.find(',', idx + 1);
	cout << start << "\t" << idx << endl;
	field = line.substr(start, idx - start);
	cout << field << endl;
	cout << stoi(field) << endl;
	field = "letters";
	cout << stoi(field);
}