// Chapter 4 Programming Challenge #16
// C4P16.cpp
// Matt Ingold
// 02/14/2017


// A program that takes user input to compare the times of three runners
// and outputs who finished 1st, 2nd, and 3rd in the race.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	string strRunner1, strRunner2, strRunner3;
	string strFastestRunner, strSecondFastestRunner, strThirdFastestRunner;
	double dblRunner1SecsToFinish, dblRunner2SecsToFinish, dblRunner3SecsToFinish;
	double dblFastestTime, dblSecondFastestTime, dblThirdFastestTime;
	
	cout << "In this program, you will enter the names of three runners\n"
		<< "and the time it takes them to finish the race.\n\n"
		<< "The program will tell you the order in which they finished.\n\n\n";
	
	// Get the runners' names. 
	cout << "Enter the name of one of the runners: ";
	cin >> strRunner1;
	cout << "Now, enter a second name: ";
	cin >> strRunner2;
	cout << "Okay, now please enter the final runner's name: ";
	cin >> strRunner3;
	cout << endl << endl;

	// Get the runners' times.
	cout << "How many seconds did it take " << strRunner1 << " to finish the race? ";
	cin >> dblRunner1SecsToFinish;
	cout << "And how many seconds did it take " << strRunner2 << " to finish? ";
	cin >> dblRunner2SecsToFinish;
	cout << "Alright, and how about " << strRunner3 << ", how many seconds for them? ";
	cin >> dblRunner3SecsToFinish;
	cout << endl << endl;

	// Figure out who finished 1st, 2nd, and 3rd.
	if ((dblRunner1SecsToFinish <= dblRunner2SecsToFinish) && (dblRunner1SecsToFinish <= dblRunner3SecsToFinish)) //Runner1 is fastest
	{
		if (dblRunner2SecsToFinish <= dblRunner3SecsToFinish) // Runner2 is second fastest
		{
			strFastestRunner = strRunner1;
			dblFastestTime = dblRunner1SecsToFinish;
			strSecondFastestRunner = strRunner2;
			dblSecondFastestTime = dblRunner2SecsToFinish;
			strThirdFastestRunner = strRunner3;
			dblThirdFastestTime = dblRunner3SecsToFinish;
		}
		else // Runner3 is second fastest
		{
			strFastestRunner = strRunner1;
			dblFastestTime = dblRunner1SecsToFinish;
			strSecondFastestRunner = strRunner3;
			dblSecondFastestTime = dblRunner3SecsToFinish;
			strThirdFastestRunner = strRunner2;
			dblThirdFastestTime = dblRunner2SecsToFinish;
		}
	} // end Runner1 is fastest
	else if ((dblRunner2SecsToFinish <= dblRunner1SecsToFinish) && (dblRunner2SecsToFinish <= dblRunner3SecsToFinish)) // Runner2 is fastest
	{
		if (dblRunner1SecsToFinish <= dblRunner3SecsToFinish) // Runner1 is second fastest
		{
			strFastestRunner = strRunner2;
			dblFastestTime = dblRunner2SecsToFinish;
			strSecondFastestRunner = strRunner1;
			dblSecondFastestTime = dblRunner1SecsToFinish;
			strThirdFastestRunner = strRunner3;
			dblThirdFastestTime = dblRunner3SecsToFinish;
		}
		else // Runner3 is second fastest
		{
			strFastestRunner = strRunner2;
			dblFastestTime = dblRunner2SecsToFinish;
			strSecondFastestRunner = strRunner3;
			dblSecondFastestTime = dblRunner3SecsToFinish;
			strThirdFastestRunner = strRunner1;
			dblThirdFastestTime = dblRunner1SecsToFinish;
		}
	} // end Runner2 is fastest
	else // Runner3 is fastest
	{
		if (dblRunner1SecsToFinish <= dblRunner2SecsToFinish) // Runner1 is second fastest
		{
			strFastestRunner = strRunner3;
			dblFastestTime = dblRunner3SecsToFinish;
			strSecondFastestRunner = strRunner1;
			dblSecondFastestTime = dblRunner1SecsToFinish;
			strThirdFastestRunner = strRunner2;
			dblThirdFastestTime = dblRunner2SecsToFinish;
		}
		else // Runner2 is second fastest
		{
			strFastestRunner = strRunner3;
			dblFastestTime = dblRunner3SecsToFinish;
			strSecondFastestRunner = strRunner2;
			dblSecondFastestTime = dblRunner2SecsToFinish;
			strThirdFastestRunner = strRunner1;
			dblThirdFastestTime = dblRunner1SecsToFinish;
		}
	}


	// Display a simple chart for the user
	cout << setw(14) << "Runner" << setw(14) << "Time" << setw(14) << "Place\n\n";
	cout << setw(14) << strFastestRunner << setw(14) << dblFastestTime << setw(14) << "1st\n";
	cout << setw(14) << strSecondFastestRunner << setw(14) << dblSecondFastestTime << setw(14) << "2nd\n";
	cout << setw(14) << strThirdFastestRunner << setw(14) << dblThirdFastestTime << setw(14) << "3rd\n";
	


	return 0;
}