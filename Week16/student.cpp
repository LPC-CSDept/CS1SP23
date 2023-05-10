#include "student.hpp"

int makeRecord(Names name[])
{
	ifstream ifs;
	string line, field;
	stringstream ss;

	int idx, start, cnt;

	ifs.open("allstates.txt");
	// ifs.open("test.txt");
	cnt = 0;
	while (ifs >> line)
	{
		ss << line;
		for (int i = 0; i < 5; i++)
		{
			getline(ss, field, ',');
			switch (i)
			{
			case 0:
				name[cnt].stname = field;
				break;
			case 1:
				name[cnt].gender = field;
				break;
			case 2:
				name[cnt].year = stoi(field);
				break;
			case 3:
				name[cnt].name = field;
				break;
			case 4:
				name[cnt].count = stoi(field);
				break;
			}
		}
		cnt += 1;
		ss.clear();
	}
	return cnt;
}
void printRecord(Names names[], int i)
{
	cout << setw(5) << names[i].stname << "\t";
	cout << setw(3) << names[i].gender << "\t";
	cout << setw(5) << names[i].year << "\t";
	cout << setw(10) << names[i].name << "\t\t";
	cout << setw(5) << names[i].count << endl;
}