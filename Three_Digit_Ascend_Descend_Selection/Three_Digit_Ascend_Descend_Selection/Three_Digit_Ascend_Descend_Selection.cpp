/*
Steve Wang 10/5/17 Period 3
Assignment Name : Three Digit Ascend Descend Selection
Figure out if a number is ascending or descending
*/
// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h>
#include <Windows.h>// gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
					 // Functions() 
// MAIN
void pause() {

}
void main() {
	for (int i = 0; i < 30; i++) { // creates the loop, making sure to stop after 30 times

		int x;//x is three digit number
		cout << "Please enter a three digit number : ";
		cin >> x;
		int A, B, C; //Defines variables A, B, and C, for each digit of the 3 digit number
		C = x % 10; //Gets last digit
		x /= 10; //Omits last digit of x
		B = x % 10; //Gets last digit
		x /= 10; //Omits last digit
		A = x; //One digit left

		if (A > B && B > C)
		{
			cout << "Your number, " << A << B << C << ", is descending" << endl; //If the numbers are in order from greatest to least, the computer tells you that the number you entered in descending.
			Sleep(500);
		}
		else if (A < B && B < C)
		{
			cout << "Your number, " << A << B << C << ", is ascending" << endl; //If the numbers are in order from least to greatest, output  is "Your number, (number), is ascending. 
			Sleep(500);
		}
		else
		{
			cout << "The number you entered, " << A << B << C << ", is neither ascending nor descending..." << endl; //If neither case is true, output is "Neither"
			Sleep(500);
		}
	}
	pause(); // Pauses to see the displayed text
}



