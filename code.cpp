#include <iostream>
using namespace std;

void choice_one();
void choice_two();
void Bob();
void No_Bob();
void Better_Way(bool);
void Boat(bool);
void Keep_Going(bool);
void Shore(bool);

int main (int argc, char * const argv[])
{
	string response;
	
  cout << " You have found an old treasure map! You wonder if you should tell your friends about it or keep it to your self." << endl;
  cout << "To go with a friend type yes" << endl;
	cout << "To go without a friend type no" << endl;
    cin >> response;
	if (response == "yes")
		choice_one();
	else {
		choice_two();
	}

    return 0;
}

void choice_one()
{
	string response;
	cout << "You decide to call your friend Jim. He thinks its awesome!" << endl;
	cout << " Jim thinks you should tell your other friend Bob" << endl;
	cout << "To tell Bob type yes" << endl;
	cout << "To not tell Bob type no" << endl;
	cin >> response;
	if (response == "yes") {
		Bob();
	}
	else {
		No_Bob();
	}

}

void choice_two()
{
	string response;
	cout << "You decide its best stay on your own." << endl;
	cout << "Do you want to start by getting a boat and getting there as soon as possible if so type yes" << endl;
	cout << "Or do you want to wait and find a better way to follow the map if that then type no" << endl;
	cin >> response;
	if (response == "yes") {
		Boat(false);
	}
	else {
		Better_Way(false);
	}

}
void Bob()
{
	cout << "You think Bob could help you and Jim so you invite him over" << endl;
    cout << "Later on when you are planning with Jim and Bob, Bob steals the map and runs off! You and Jim chase after him but he's to fast! EVIL BOB "<< endl;
	}
	


void No_Bob()
{
	string response;
	cout << "You decide its best stay with Jim and not invite Bob." << endl;
	cout << "Do you and Jim want to start by getting a boat and getting there as soon as possible if so type yes" << endl;
	cout << "Or do you and Jim want to wait and find a better way to follow the map if that then type no" << endl;
    cin >> response;
	if (response == "yes") {
		Boat(true);
	}
	else {
		Better_Way(true);
	}
	
}
void Boat(bool withfriends)
{
	string response;
	cout << "You want to find it as soon as possible so you think a boat would be best!" << endl;
	cout << "Later on you see dark clouds ahead. You want to get there as soon as possible but you dont want to run into trouble" << endl;
	cout << "To keep going say yes" << endl;
	cout << "To go back to shore say no" << endl;
	cin >> response;
	if (response == "yes") {
		Keep_Going(withfriends);
	}
	else {
		Shore(withfriends);
	}
		
}



void Better_Way(bool withfriends)
{
	
	if (withfriends == true) {
		cout << "You and Jim decide its best stay behind a little longer and think it through."<< endl;
	}
	else {
		cout << "You decide its best stay behind a little longer and think it through."<< endl;
	}

	
}
void Keep_Going(bool withfriends)
{
	cout << "You think you can beat the clouds so you keep going!" << endl;
	
}



void Shore(bool withfriends)
{
	cout << "You want to just play it safe and go back to shore." << endl;
	if (withfriends == true) {
		cout << "You and Jim want to just play it safe and go back to shore."<< endl;
	}
	
}

