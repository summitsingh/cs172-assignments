/*
CS-172-C, Lab 063, Group 45
5/5/2017
Summit Singh Thakur
Shivansh Suhane
Kevin Wen

It took 1.35 seconds when the filename is entered correctly when first 
prompted, but 4.58 seconds when entered entered correctly after entering
it incorrectly a couple time.

Insertion sort took 237.481 seconds.

Quicksort took 0.427 seconds.
*/
#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

void swap(vector <string> &words, int a, int b)
{
    string temp;
    temp = words[a];
    words[a] = words[b];
    words[b] = temp;
}

int partition(vector<string> &words, int a, int b)
{
    string mid = words[b];
    int i = a - 1;
    for (int j = a; j < (b - 1); j++)
    {
        if (words[j] <= mid)
        {
            i++;
            swap(words, i, j);
        }
    }
    swap(words, i + 1, b);
    return i + 1;
}

void quick_sort(vector<string> &words, int a, int b)
{
    if (a < b)
    {
        int p = partition(words, a, b);
        quick_sort(words, a, p - 1);
        quick_sort(words, p + 1, b);
    }
}

void insertion_sort(vector<string> &words)
{
    string temp;
    for (int i = 0; i < words.size(); i++)
    {
        int j = i;
        while (j > 0 && words[j-1] > words[j])
        {
            swap(words, j, j - 1);
            j = j - 1;
        }
    }
}

int main()
{
    //clock_t start = clock();

    cout << "Please enter the name of your file: ";
    string filename;
    cin >> filename;

    clock_t start = clock();

    string tempwords;
    vector<string> words;
    ifstream in;
    in.open(filename);
    if (!in)
    {
        cout << "The filename you have entered is invalid. Please try again."
            << endl;
        do
        {
            cout << "Please enter the name of your file: ";
            cin >> filename;
            in.open(filename);
        } while (!in);
    }
    else
        in >> tempwords;

    while (in >> tempwords)
    {
        words.push_back(tempwords);
    }    
    
    //insertion_sort(words);
    quick_sort(words, 0, words.size());

    ofstream os;
    os.open("sorted_words.txt");
    for (int i = 0; i < words.size(); i++)
        os << words[i] << endl;
    os.close();

    clock_t stop = clock();
    double time_diff = double(stop - start) / CLOCKS_PER_SEC;
    cout << time_diff << endl;
}