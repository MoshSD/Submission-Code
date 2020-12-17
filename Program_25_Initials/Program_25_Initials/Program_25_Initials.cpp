#include <iostream>
#include <string>


using namespace std;


char nameString[] = "";
char firstName;
char middleName;
char lastName;


int main()
{
	cout << "Please enter your first name initial followed by a space, middle name initial followed by a space and then finally the entirety of your surname." << endl;
	cin.getline(nameString, 50);

	for (int i = 0; i < 50; i++)
	{
		if (nameString[i] == ' ')
		{
			cout << endl;
		}
		else
		{
			cout << nameString[i];
		}


	}




}
