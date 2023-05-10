
#include <iostream>
#include <fstream>
using namespace std;

const int NUMCOURSE = 2;
struct Student
{
	int id;
	string name;
	int score[NUMCOURSE];
	int sum;
	int avg;
};

void printout(const Student);
int main()
{
	Student student;
	string name;
	int id, score1, score2;
	ifstream ifs;
	ifs.open("students.txt");
	while (ifs >> id >> name >> score1 >> score2)
	{
		student.id = id;
		student.name = name;
		student.score[0] = score1;
		student.score[1] = score2;
		student.sum = score1 + score2;
		student.avg = student.sum / 2;
		// calculate the average
		printout(student);
	}
}
// void printout(const Student student)
// {
// 	cout << student.id << " " << student.name << " " << student.score[0] << " " << student.score[1] << endl;
// 	cout << student.sum << " " << student.avg << endl;
// }
void printout(const Student s)
{
	cout << s.id << "\t" << s.name << "\t"
	     << s.score[0] << "\t" << s.score[1] << "\tsum:" << s.sum << "\taverage: " << s.avg << endl;
}