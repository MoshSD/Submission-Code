#include <iostream>
#include <string>
using namespace std;

string firstName;
string lastName;
string fullName = "";
string person2Name;
string testString = "Do you know who loves C++? XX does!";
bool firstXFound = false;



int main()
{
	cout << "Please enter your First name." << endl;
	getline(cin, firstName);
	cout << "Please enter your Last name." << endl;
	getline(cin, lastName); 
	fullName = firstName + " " + lastName;
	cout << testString << endl;
	testString = testString.insert(28, fullName, 0, fullName.length());
	cout << testString << endl;
	
	//Removing the X's
	testString.erase(testString.find_first_of('X'), 1);
	testString.erase(testString.find_last_of('X'), 1);
	cout << testString << endl;


	
	cout << "Please enter somebody elses full name!" << endl;
	getline(cin, person2Name);
	testString.replace(testString.find(fullName),testString.find(fullName) + fullName.length(), person2Name);
	testString.append(" does!");
	cout << testString << endl;

}
