/*
CS-172-C, Lab 063, Group 45
5/5/2017
Summit Singh Thakur
Shivansh Suhane
Kevin Wen
*/

#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
ifstream is;
ofstream os;

void swap(vector<string> & words, int x, int y)
{
	string temp;
	temp = words[x];
	words[x] = words[y];
	words[y] = temp;
}

void insertion_sort(vector<string> & words)
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

void quick_sort(vector<string> & words, int left, int right)
{
    int i = left;
    int j = right;
	string mid = words[(left + right) / 2];
    while (i <= j)
	{
        while (words[i] < mid)
            i++;
        while (words[j] > mid)
            j--;
        if (i <= j)
		{
            swap(words, i, j);
            i++;
            j--;
        }
	};
    if (left < j)
		quick_sort(words, left, j);
    if (i < right)
		quick_sort(words, i, right);
}

void main()
{   
	clock_t start, stop;
    
    string filename;
    
	cout << "Enter filename: ";
	cin >> filename;
    
    start = clock();
    is.open(filename);
    
    vector<string> words;
    string current_word;
    while(!is.eof())
	{
		is >> current_word;
        words.push_back(current_word);
    }
    
    //insertion_sort(words);
    //insertion sort time = 213.473s
    
    double x = words.size();
	quick_sort(words, 0, x);
    //quick sort time = 0.359s
    
    os.open("sorted_words.txt");
	for (int r = 0; r < words.size(); r++)
	{
		os << words[r] << endl;
    }
    os.close();
    stop = clock();
	double time_diff = double(stop - start) / CLOCKS_PER_SEC;
	cout << time_diff << endl;
}