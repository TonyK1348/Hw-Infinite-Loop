// HW Infinite Loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int choice = 0;
//Strings used in the program.//
	string fName = "";
	string lName = "";
	string age = "";
	string occupFirstTitle = "";
	string occupSecondTitle = "";

	//While loop to continue operation as long as the value -1 is not input which will end the loop and information collection.//
	while (choice != -1)
	{
		cout << "-1: Exit\n";
		cout << "1: Enter First Name\n";
		cout << "2: Enter Last Name\n";
		cout << "3: Enter Age\n";
		cout << "4: Enter Occupation First Title\n";
		cout << "5: Enter Occupation Second Title\n";
		cin >> choice;

		/*if (choice == -1)
			break;*/
		
		//The different choice cases the user can select from on the screen when the program is ran.//
		switch (choice)
		{
		case 1:
			cout << "What is your First Name: ";
			cin >> fName;
			break;
		case 2:
			cout << "What is your Last Name: ";
			cin >> lName;
			break;
		case 3:
			cout << "What is your Age? ";
			cin >> age;
			break;
		case 4:
			cout << "What is the first title of your Occupation? (Ex. Python) ";
			cin >> occupFirstTitle;
			break;
		case 5:
			cout << "What is the second title of your Occupation? (Ex. Programming) ";
			cin >> occupSecondTitle;
			break;
		default:
			// Assume Invalid Menu Choice
			cout << "Sorry that choice is not valid!";
			break;
		}
	}

	age += 1;
	//Final displa once user ends the program by selectiong the exit value -1.//
	cout << " " << "Thank you for using our application, " << fName << " " << lName << " and we hope your career in " << occupFirstTitle << "\n" << occupSecondTitle << " is successful.";
	cout <<  " " << "Hope your " << age << " birthday will be enjoyable and exciting!";

	return 0;
}