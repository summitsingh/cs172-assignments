#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

bool find(const vector<string>& v, string word, int start, int stop)
{
    int mid = (start + stop) / 2;
        if (start == stop)
        {
            if (v[mid] == word)
                return true;
            else return false;
        }
        else if (start > stop)
            return false;
        else
        {
            if (v[mid] == word)
                return true;
            else if (v[mid] > word)
                return find(v, word, start, mid);
            else if (v[mid] < word)
                return find(v, word, mid + 1, stop);
        }
}

int main()
{
    cout << "Hello! Please enter the name of the dictionary file: ";
    string filename;
    cin >> filename;
    string temp;
    ifstream in;
    in.open(filename);
    in >> temp;
    vector <string> s;
    while (in >> temp)
    {
        s.push_back(temp);
    }
    in.close();

    sort(s.begin(), s.end());

    cout << "Please enter the name of the file you would like to spell check: ";
    cin >> filename;
    in.open(filename);
    in >> temp;
    ofstream out;
    out.open("errors.txt");
    while (in >> temp)
    {
        //remove_if(temp.begin(), temp.end(), ::ispunct);
        string::iterator new_end = remove_if(temp.begin(), temp.end(), ::ispunct);
        temp.erase(new_end, temp.end());
        transform(temp.begin(), temp.end(), temp.begin(), tolower);
        if (find(s, temp, 0, s.size()) == false)
        {
            out << temp << endl;
        }
    }
    out.close();

    /*
    if (find(s, temp, 0, s.size()) == true)
        cout << "The spelling of your word is correct! :)" << endl;
    else
        cout << "The spelling of your word is incorrect! :(" << endl;
    */

    return 0;  
}