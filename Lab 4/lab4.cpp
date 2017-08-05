/*
CS-172-C, Lab 063, Group 45
4/28/2017
Summit Singh Thakur
Shivansh Suhane
Kevin Wen
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
ifstream is;
ofstream os;

bool vector_contains(string s, vector<string> &words)
{
	for (int i = 0; i < words.size(); i++)
	{
		if (s == words[i])
			return true;
	}
	return false;
}

void swap(vector<string> & words, int x, int y)
{
    string temp;
	temp = words[x];
	words[x] = words[y];
	words[y] = temp;
}

void sort(vector<string> & words)
{
	for (int i = 0; i < words.size(); i++)
	{
        int j = i;
		while (j > 0 && words[j - 1] > words[j])
		{
			swap(words, j, j - 1);
			j = j - 1;
        }
    }
}

void main()
{
    is.open("ModestProposal.txt");
    vector<string> words;
    string current_word;
	while (!is.eof())
	{
		is >> current_word;
		if (!vector_contains(current_word, words))
			words.push_back(current_word);
    }
	is.close();
	sort(words);
	cout << "Size of the vector: " << words.size() << endl;
	os.open("sorted_words.txt");
	for (int r = 0; r < words.size(); r++)
	{
		os << words[r] << endl;
    }
    os.close();
}