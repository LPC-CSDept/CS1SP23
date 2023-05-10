#include "student.hpp"

int main()
{
	Names name[MAXSIZE];
	int numRecord;

	numRecord = makeRecord(name);
	for (int i = 0; i < numRecord; i++)
		printRecord(name, i);
}
