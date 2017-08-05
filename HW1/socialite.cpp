#include "socialite.h"
using namespace std;

//constructors
socialite::socialite()
{
	firstname_ = "";
	lastname_ = "";
	userid_ = "";
	picturelink_ = "";
	websiteurl_ = "";
	websitedescription_ = "";
}

//inspectors
string socialite::getFirstName() const
{
	return firstname_;
}
string socialite::getLastName() const
{
	return lastname_;
}
string socialite::getUserID() const
{
	return userid_;
}
string socialite::getPictureLink() const
{
	return picturelink_;
}
string socialite::getWebsiteURL() const
{
	return websiteurl_;
}
string socialite::getWebsiteDescription() const
{
	return websitedescription_;
}

//mutators
void socialite::setFirstName(const string &firstname)
{
	firstname_ = firstname;
}
void socialite::setLastName(const string &lastname)
{
	lastname_ = lastname;
}
void socialite::setUserID(const string &userid)
{
	userid_ = userid;
}
void socialite::setPictureLink(const string &picturelink)
{
	picturelink_ = picturelink;
}
void socialite::setWebsiteURL(const string &websiteurl)
{
	websiteurl_ = websiteurl;
}
void socialite::setWebsiteDescription(const string &websitedescription)
{
	websitedescription_ = websitedescription;
}

//facilitators

//output to HTML
string socialite::toHTML()
{
	ostringstream os;
	os << "<html>" << endl;
	os << "<head>" << endl;
	os << "<title>" << firstname_ << " " << lastname_ << "'s Socialite Page</title>" << endl;
	os << "</head>" << endl;
	os << "<body>" << endl;
	os << "<img src='" << picturelink_ << "' alt='" << firstname_ << " " << lastname_ << " Picture' align='right' height='250px'>" << endl;
	os << "<h1>" << userid_ << "</h1>" << endl;
	os << "<h2>" << firstname_ << " " << lastname_ << "</h2>" << endl;
	os << "<hr>" << endl;
	os << "<p>" << firstname_ << " wants to share <a href='" << websiteurl_ << "' target='_blank'>" << websitedescription_ << "</a> with you: <br>" << endl;
	os << websiteurl_ << "</p>" << endl;
	os << "</body>" << endl;
	os << "</html>";
	return os.str();
}

//output to string
string socialite::toString()
{
	ostringstream os;
	os << "First Name: " << firstname_ << endl << "Last Name: " << lastname_ << endl << "User ID: " << userid_ << endl << "Picture: " << picturelink_ << endl << "Website: " << websiteurl_ << endl << "Website Description: " << websitedescription_;
	return os.str();
}