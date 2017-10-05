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
	cout << "Please enter a three digit number: ";
	int x;//x is three digit number
	cin >> x;
	int A, B, C; //C is ones digit. B is tens digit. A is hundreds digit
	C = x % 10; //Gets last digit
	x /= 10; //Omits last digit of x
	B = x % 10; //Gets last digit
	x /= 10; //Omits last digit
	A = x; //One digit left
	if (A > B && B > C)
	{
		cout << "Descending" << endl; //If the numbers are in order from greatest to least, output is "Ascending"
	}
	else if (A < B && B < C)
	{
		cout << "Ascending" << endl; //If the numbers are in order from least to greatest, output  is "Descending"
	}
	else
	{
		cout << "Neither" << endl; //If neither case is true, output is "Neither"
	}
	pause(); // Pauses to see the displayed text
}



