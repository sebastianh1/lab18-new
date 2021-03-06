/******************************************************************************
* AUTHORS    : Kasra Tabib & Sebastian Hooshmand
* LAB #18    : Aunt Ellen's egg ranch
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/28/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/******************************************************************************
 * Party Planner
 *-----------------------------------------------------------------------------
 *	This program will output the number of dozens as well the number of
 *		excess eggs based on the user's input.
 *-----------------------------------------------------------------------------
 * INPUT:
 *    eggs			: number of eggs
 *
 * OUTPUT:
 * 	  dozens		: number of dozens
 * 	  excess		: number of excess eggs
 * 	  average	: average number of eggs gathered
 *****************************************************************************/
int main()
{

	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMERS : Programmer's name
	 * CLASS       : Student's Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (specific to this lab)
	 * LAB_NAME    : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMERS []   = "Kasra Tabib & Sebastian Hooshmand";
	const char CLASS[]          = "CS1A";
	const char SECTION []       = "MW: 8am-11:50am";
	const int  LAB_NUM          = 18;
	const char LAB_NAME[]       = "Aunt Ellen's egg ranch";
	const int  COL				= 39;
	const int  COL_1			= 13;
	const int  COL_2			= 15;
	// Variable declaration

	int 	eggs;
	int		dozens;
	int 	excess;
	float	average;
	int		count;
	float	eggCount;
	float	totalEggs;



	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMERS << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM     << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	* INPUT - read's in the number of eggs.
	*************************************************************************/


	for (count = 1; count <= 3; count = count + 1)
	{
		cout << "TEST #" << count << ":" << endl;
		cout << "Welcome to Aunt Ellen's eggs to dozens converter!" << endl;
		cout << endl;

		cout << right;
		cout << setw(COL)<< "Enter the number of eggs gathered: ";
		cin  >> eggs;
		if (eggs >= 0)
		{
			eggCount	= 0;
			totalEggs	= 0;

			while (eggs > -1)
			{
				dozens 	= eggs / 12;
				excess 	= eggs % 12;



				if( (eggs % 12) > 0)
				{
					if ( (eggs / 12) > 0)
					{

						cout	<< setw (COL_1)
						 	<< "You have ";
						cout	<< dozens << " dozen "
								<< excess << " eggs." << endl << endl;

					}
					else
					{
						cout	<< setw (COL_1)
							<< "You have ";
						cout	<< excess << " eggs." << endl
								<< endl;
					}
				}
				else
				{
					cout		<< setw (COL_1)
							<< "You have ";
					cout		<< dozens << " dozen eggs." << endl
								<< endl;
				}


				eggCount 	= eggCount + 1;

				totalEggs	= totalEggs + eggs;


				cout	<< setw (COL)
				 << "Enter the number of eggs gathered: ";
				cin >> eggs;


			}

			average		= totalEggs / eggCount;
			cout	<< setprecision(1)	<< fixed;
			cout    << endl;
			cout 	<< "TOTALS :" 		<< endl;
			cout	<< setw (COL_2) << "On average " 	<< average
					<< " eggs have been gathered."	<< endl;
			cout    << setw (COL_2) << "A total of " << endl << endl;
		}

	}

	return 0;
}



