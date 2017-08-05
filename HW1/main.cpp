#include <iostream>
#include <fstream>
#include "socialite.h"
using namespace std;
ofstream os;

void main()
{
    socialite user1, user2, user3, user4, user5;

	//user1
	//mutators
	user1.setFirstName("Summit Singh");
	user1.setLastName("Thakur");
	user1.setUserID("user1");
	user1.setWebsiteURL("https://www.linkedin.com/in/summitsingh/");
	user1.setPictureLink("https://media.licdn.com/mpr/mpr/shrinknp_400_400/AAEAAQAAAAAAAApVAAAAJDBiM2Q5MGU1LWFiMTAtNDIxYS04N2Q4LTM0OGY2MDk3YTIyNA.jpg");
	user1.setWebsiteDescription("LinkedIn");
	//facilitators
	os.open(user1.getUserID() + ".html"); //open html file
	os << user1.toHTML() << endl; //output to html file
	os.close(); //close html file
	os.open(user1.getUserID() + ".txt"); //open text file
	os << user1.toString(); //output to text file
	os.close(); // close text file

	//user2
	//mutators
	user2.setFirstName("Emma");
	user2.setLastName("Stone");
	user2.setUserID("user2");
	user2.setWebsiteURL("https://twitter.com/EmmaStoneWeb");
	user2.setPictureLink("https://images-na.ssl-images-amazon.com/images/M/MV5BMjI4NjM1NDkyN15BMl5BanBnXkFtZTgwODgyNTY1MjE@._V1.._UY1200_CR84,0,630,1200_AL_.jpg");
	user2.setWebsiteDescription("Twitter");
	//facilitators
	os.open(user2.getUserID() + ".html"); //open html file
	os << user2.toHTML() << endl; //output to html file
	os.close(); //close html file
	os.open(user2.getUserID() + ".txt"); //open text file
	os << user2.toString(); //output to text file
	os.close(); // close text file

	//user3
	//mutators
	user3.setFirstName("Emma");
	user3.setLastName("Watson");
	user3.setUserID("user3");
	user3.setWebsiteURL("https://twitter.com/emmawatson");
	user3.setPictureLink("https://images-na.ssl-images-amazon.com/images/M/MV5BMTQ3ODE2NTMxMV5BMl5BanBnXkFtZTgwOTIzOTQzMjE@._V1_SY1000_CR0,0,810,1000_AL_.jpg");
	user3.setWebsiteDescription("Twitter");
	//facilitators
	os.open(user3.getUserID() + ".html"); //open html file
	os << user3.toHTML() << endl; //output to html file
	os.close(); //close html file
	os.open(user3.getUserID() + ".txt"); //open text file
	os << user3.toString(); //output to text file
	os.close(); // close text file

	//user4
	//mutators
	user4.setFirstName("Leonardo");
	user4.setLastName("DiCaprio");
	user4.setUserID("user4");
	user4.setWebsiteURL("https://twitter.com/LeoDiCaprio");
	user4.setPictureLink("https://images-na.ssl-images-amazon.com/images/M/MV5BMjI0MTg3MzI0M15BMl5BanBnXkFtZTcwMzQyODU2Mw@@._V1_.jpg");
	user4.setWebsiteDescription("Twitter");
	//facilitators
	os.open(user4.getUserID() + ".html"); //open html file
	os << user4.toHTML() << endl; //output to html file
	os.close(); //close html file
	os.open(user4.getUserID() + ".txt"); //open text file
	os << user4.toString(); //output to text file
	os.close(); // close text file

	//user5
	//mutators
	user5.setFirstName("Mila");
	user5.setLastName("Kunis");
	user5.setUserID("user5");
	user5.setWebsiteURL("http://www.imdb.com/name/nm0005109/");
	user5.setPictureLink("https://images-na.ssl-images-amazon.com/images/M/MV5BODQyNTQyNzY4MV5BMl5BanBnXkFtZTcwODg5MDA3MQ@@._V1_.jpg");
	user5.setWebsiteDescription("IMDb");
	//facilitators
	os.open(user5.getUserID() + ".html"); //open html file
	os << user5.toHTML() << endl; //output to html file
	os.close(); //close html file
	os.open(user5.getUserID() + ".txt"); //open text file
	os << user5.toString(); //output to text file
	os.close(); // close text file
}