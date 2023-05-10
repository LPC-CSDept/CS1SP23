// Chapter 11. Structured Data
// Programming Lab 11-3
// lab11-3.cpp

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const unsigned short NUMCOURSE = 2;
struct Scores
{
	int score[NUMCOURSE];
	int sum;
	int avg;
};
struct Students
{
	int id;
	string name;
	Scores screcord;
};

int makingstructarray(Students[]); // return value : the number of struct array
void printrecord(const Students);
void findusername(Students[], int, string);

int main()
{
	int numofRecords = 0;
	Students s[50];
	string username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	for (int i = 0; i < numofRecords; i++)
		printrecord(s[i]);

	cout << "Enter user name to find in Students's records\n";
	cin >> username;
	findusername(s, numofRecords, username);
}
int makingstructarray(Students s[])
{
	string name;
	int id, score1, score2;
	int i = 0;
	ifstream ifs;
	ifs.open("students.txt");
	while (ifs >> id >> name >> score1 >> score2)
	{
		s[i].id = id;
		s[i].name = name;
		s[i].screcord.score[0] = score1;
		s[i].screcord.score[1] = score2;
		s[i].screcord.sum = s[i].screcord.score[0] + s[i].screcord.score[1];
		s[i].screcord.avg = s[i].screcord.sum / 2;
		i++;
	}
	return i;
}
void findusername(Students s[], int numofRecords, string username)
{
	for (int i = 0; i < numofRecords; i++)
	{
		if (username == s[i].name)
		{
			printrecord(s[i]);
		}
	}
}
void printrecord(const Students s)
{
	cout << s.id << "\t" << s.name << "\t"
	     << s.screcord.score[0] << "\t" << s.screcord.score[1] << "\tsum:" << s.screcord.sum << "\taverage: " << s.screcord.avg << endl;
}