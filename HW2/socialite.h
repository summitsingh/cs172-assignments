#ifndef socialite_h
#define socialite_h
#include <string>
#include <vector>
using namespace std;

class socialite
{
public:
    //constructors
    socialite();
	socialite(string firstname, string lastname, string userid, string picturelink, string websiteurl, string websitedescription, vector<string> cliques);

    //inspectors
    string getFirstName() const;
	string getLastName() const;
	string getUserID() const;
    string getPictureLink() const;
    string getWebsiteURL() const;
    string getWebsiteDescription() const;
	int getNumOfCliques();
	string getCliqueName(int i);

    //mutators
    void setFirstName(const string&);
	void setLastName(const string&);
	void setUserID(const string&);
    void setPictureLink(const string&);
    void setWebsiteURL(const string&);
    void setWebsiteDescription(const string&);
	void setCliques(const vector<string>&);

    //facilitators

	//output to html
	void toHTML(ostream &os);

	//output to string
    void toString(ostream &os);

private:
    string firstname_;
	string lastname_;
	string userid_;
    string picturelink_;
    string websiteurl_;
    string websitedescription_;
	vector<string> cliques_;
};
#endif