// Chapter 4 Programming Challenge # 25
// C4P25.cpp
// Matt Ingold
// 02/14/2017


// A program that calculates a user's monthly phone bill based off
// which package they have and how many minutes they've used.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	const double PACKAGE_A = 39.99, PACKAGE_B = 59.99, PACKAGE_C = 69.99,
		PROVIDED_MINS_A = 450, PROVIDED_MINS_B = 900,
		ADDITIONAL_MINS_A = 0.45, ADDITIONAL_MINS_B = 0.40;
	double dblPackageCost, dblMinutesUsed, dblMinutesCost, dblTotalCost;
	string strUserPackage;
	

	// Get the user's package letter
	cout << "What mobile subscription package do you have? (A, B, or C) ";
	cin >> strUserPackage;


	// Assign subscription cost of package to dblPackageCost
	if (strUserPackage == "A")
		dblPackageCost = PACKAGE_A;
	else if (strUserPackage == "B")
		dblPackageCost = PACKAGE_B;
	else if (strUserPackage == "C")
		dblPackageCost = PACKAGE_C;
	else
		cout << "That is an invalid selection. Please restart the program.";


	// Get the number of minutes used
	cout << "How many minutes did you use last month? ";
	cin >> dblMinutesUsed;
	cout << endl << endl << endl;


	// Determine the user's cost of additional minutes as well as total cost
	if (strUserPackage == "A")
		if (dblMinutesUsed > PROVIDED_MINS_A)
		{
			dblMinutesCost = (dblMinutesUsed - PROVIDED_MINS_A) * ADDITIONAL_MINS_A;
			dblTotalCost = dblMinutesCost + PACKAGE_A;
		}
		else
		{
			dblMinutesCost = 0;
			dblTotalCost = PACKAGE_A;
		} // end Package A
	else if (strUserPackage == "B")
		if (dblMinutesUsed > PROVIDED_MINS_B)
		{
			dblMinutesCost = (dblMinutesUsed - PROVIDED_MINS_B) * ADDITIONAL_MINS_B;
			dblTotalCost = dblMinutesCost + PACKAGE_B;
		}
		else
		{
			dblMinutesCost = 0;
			dblTotalCost = PACKAGE_B;
		} //end Package B
	else if (strUserPackage == "C")
	{
		dblMinutesCost = 0;
		dblTotalCost = PACKAGE_C;
	} // end Package C
	else
	{
		cout << "Something went wrong. Please restart the program.";
	}
		

	// Display details of the user's bill
	cout << setw(7) << "Package" << setw(14) << "Package Cost" << setw(14) << "Minutes Used" <<
		setw(14) << "Minutes Cost" << setw(20) << "TOTAL AMOUNT DUE" << endl;
	cout << setw(7) << strUserPackage << setw(14) << dblPackageCost << setw(14) << dblMinutesUsed <<
		setw(14) << dblMinutesCost << setw(20) << dblTotalCost << endl;

	





	system("pause");
	return 0;
}