#include <stdio.h>
using namespace std;

#include <vector>
#include <string>
#include "Words.h"
#include <iostream>

int Words::Find()
{
	printf("Enter a list of words followed by end-of-file: \n");

	int vector_sz = 0;
	vector<string> words;
	string word;

	while (!getline(cin, word).eof())
	{
		words.push_back(word);
	}

	vector_sz = words.size();
	if (vector_sz == 0)
	{
		printf("Please enter some words!\n");
		return -1;
	}

	vector<int> frequency;
	vector<string> unique_words;
	int count = 0;
	bool isUnique;

	unique_words.push_back(words.at(0));

	for (long i = 0; i < words.size(); ++i)
	{
		isUnique = true;

		for (int j = 0; j < unique_words.size(); ++j)
		{
			if (words.at(i) == unique_words.at(j))
			{
				isUnique = false;
			}
		}
		if (isUnique)
		{
			unique_words.push_back(words.at(i));
		}
	}

	for (int i = 0; i < unique_words.size(); ++i)
	{
		for (int j = 0; j < words.size(); ++j)
		{
			if (unique_words.at(i) == words.at(j))
			{
				count += 1;
			}
		}
		frequency.push_back(count);
		count = 0;
	}

	for (int i = 0; i < unique_words.size(); ++i)
	{
		printf("%s :  %d \n", unique_words.at(i).c_str(), frequency.at(i));
	}
	return 0;
}
