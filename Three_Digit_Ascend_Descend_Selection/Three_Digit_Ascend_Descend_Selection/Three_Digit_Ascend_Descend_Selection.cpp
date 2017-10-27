/*
Steve Wang 10/5/17 Period 3
Assignment Name : Three Digit Ascend Descend Selection
Figure out if a number is ascending or descending
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	for (size_t i = 0; i < 30; i++)
	{

		// defining and assigning variables
		int User_Number; //Use semi-representative varibales
		int First_Digit; //Use semi-representative varibales
		int Second_Digit; //Use semi-representative varibales
		int Third_Digit; //Use semi-representative varibales
		int y;

		cout << "Please enter  3 digit number . . ." << endl;
		cin >> User_Number; // generate random 3 digit numbers... ex: '391'
							// MAIN
							//Defining variables
		First_Digit = User_Number / 100;

		y = User_Number / 10;

		Second_Digit = y % 10;

		Third_Digit = User_Number % 10;
		// user queries
		cout << User_Number << endl;
		if (First_Digit > Second_Digit && Second_Digit > Third_Digit) {
			cout << "Descending" << endl;
		}
		else if (First_Digit < Second_Digit && Second_Digit < Third_Digit) {
			cout << "Ascending" << endl;
		}
		else {
			cout << "Neither" << endl;
		}

		pause(); // pauses to see the displayed text
	}
}





