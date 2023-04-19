#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void insertOne(vector<int> &, int);
int deleteOne(vector<int> &, int);
void printVector(vector<int>, int);

int main()
{
	// vector<int> number{5, 15, 20, 30, 35};
	vector<int> number;
	number.push_back(5);
	number.push_back(15);
	number.push_back(20);
	number.push_back(30);
	number.push_back(35);
	int insval, delval;

	// cout << "Enter your insertion value: ";
	// cin >> insval;
	printVector(number);
	insval = 25;
	insertOne(number, insval);
	printVector(number);
	delval = 30;
	deleteOne(number, delval);
}

int deleteOne(vector<int> &number, int n)
{
	vector<int>::iterator iter;
	for (iter = number.begin(); iter != number.end(); iter++)
	{
		if (*iter == n)
		{
			number.erase(iter);
			return 0;
		}
	}
	return -1;
}
void insertOne(vector<int> &number, int n)
{
	vector<int>::iterator iter;

	for (iter = number.begin(); iter != number.end(); iter++)
	{
		if (*iter >= n)
		{
			cout << *iter << endl;
			break;
		}
	}
	number.insert(iter, n);
}
void printVector(vector<int> number)
{
	for (int val : number)
	{
		cout << setw(5) << val << "\t";
	}
	cout << endl;
}