#include <iostream>
#include <fstream>
#include "socialite.h"
using namespace std;

void main()
{
	int i = 0;
	string firstname, lastname, userid, picturelink, websiteurl, websitedescription, inputfile;
	cout << "Name of the input file (for example - Socialite_setup.txt): ";
	cin >> inputfile;
	//open the file
	ifstream input(inputfile);
	while (!input.eof())
	{
		//read socilaite info
		getline(input, userid);
		getline(input, firstname);
		getline(input, lastname);
		getline(input, picturelink);
		getline(input, websiteurl);
		getline(input, websitedescription);
		vector<string> cliques;
		string clique;
		while (getline(input, clique))
		{
			if (clique == "++++")
				break;
			cliques.push_back(clique);
		}
		i++;
		socialite s(firstname, lastname, userid, picturelink, websiteurl, websitedescription, cliques);
		cout << "\n\nSocilaite : #" << i << endl;
		s.toString(cout); //display information in screen
		ofstream output(s.getUserID() + ".html"); //open html file
		s.toHTML(output); //output to html file
	}
	input.close();
}