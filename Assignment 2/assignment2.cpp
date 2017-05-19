// Program Name:	Magic Dates
// Chapter:			Chapter 3  - Decision Structures and Boolean Logic
// Pg. / Ex.:		Assignment 2 - Chapter 3
// Programmer:		Michael A Gardner
// Date:			22/FEB 2016
// Description:		This program gets the value for the month, day , and year using a short data type.
//					This program uses a decision stucture to find if the date entered is a magic date.


//#include <iomanip>
//#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	// ****  Varables  ****
	short	day = 0,
			month = 0,
			year = 0;


	// **** Imput from user ****

	// Get a value for the month from the user.
	cout << "Enter a month, in numeric form (1-12): ";
	cin >> month;
	
	// Get a value for the day from the user.
	cout << "Enter a day (1-32): ";
	cin >> day;
	
	// Get a value for the year from the user.
	cout << "Enter a year (as 2 digits): ";
	cin >> year;
	cout << endl;


	// ****  Decision Structure and Output  ****

	// Determine if the date is a magic date. (month multiplyed by day should equil the value for year.)
	if ((month * day) == year)
	{
		// Output to the user if (month * day) = year.
		cout << "The date you entered, " << month << "/" << day << "/" << year << ", is a magic date.";
	}

	else
	{
		// Output to the user if (month * day) does not = the year.
		cout << "The date you entered, " << month << "/" << day << "/" << year << ", is not a magic date.";
	}


	cout << endl << endl;  //Blank Line
	return 0;
}
