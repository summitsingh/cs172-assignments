#ifndef socialite_h
#define socialite_h
#include <string>
#include <sstream>
using namespace std;

class socialite
{
public:
    //constructors
    socialite();

    //inspectors
    string getFirstName() const;
	string getLastName() const;
	string getUserID() const;
    string getPictureLink() const;
    string getWebsiteURL() const;
    string getWebsiteDescription() const;

    //mutators
    void setFirstName(const string&);
	void setLastName(const string&);
	void setUserID(const string&);
    void setPictureLink(const string&);
    void setWebsiteURL(const string&);
    void setWebsiteDescription(const string&);

    //facilitators

	//output to html
	string toHTML();

	//output to string
    string toString();

private:
    string firstname_;
	string lastname_;
	string userid_;
    string picturelink_;
    string websiteurl_;
    string websitedescription_;
};
#endif