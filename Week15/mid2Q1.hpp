#include "Q1.hpp"

int getNumLines(string filename)
{
	string line;
	ifstream ifs;
	int cnt = 0;
	ifs.open(filename);
	if (!ifs)
	{
		cerr << "File open error\n";
		exit(0);
	}
	while (getline(ifs, line))
	{
		cnt += 1;
	}
	ifs.close();
	return cnt;
}
int getNumWords(string filename)
{
	string word;
	ifstream ifs;
	int cnt = 0;
	ifs.open(filename);
	if (!ifs)
	{
		cerr << "File open error\n";
		exit(0);
	}
	while (ifs >> word)
	{
		cnt += 1;
	}
	ifs.close();
	return cnt;
}
char getMFU(string filename)
{
	int seen[26] = {0};
	ifstream ifs;
	string word;
	char c, mfu;
	int idx, max;

	ifs.open(filename);
	if (!ifs)
	{
		cerr << "File open error\n";
		exit(0);
	}
	max = -1;
	while (ifs >> word)
	{
		for (int i = 0; i < word.size(); i++)
		{
			c = tolower(word[i]);
			idx = c - 'a';
			seen[idx] += 1;
			if (max < seen[idx])
			{
				max = seen[idx];
				mfu = c;
			}
		}
	}

	ifs.close();
	return mfu;
}