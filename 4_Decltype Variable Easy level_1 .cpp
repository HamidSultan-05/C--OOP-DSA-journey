#include<iostream>                           // Include the iostream library for input/output operations
using namespace std;                         // Use the standard namespace to avoid prefixing standard library names with "std::"

int main()
{
	/*In this program we will assign a value to variable (a) and then we will declare a decltype variable 
	(b) and assign it another value and then by printing the results it will show that how decltype variable
	copies the datatype from another variable. It makes a program cleaner,template programming and performance 
	code*/
	int x = 10;                             // Decalaring a variable x and initializing it
	decltype(x) y = 20;                     // Declaring a variable y using decltype to copy the type of x and initializing it
	cout << "Value of x=" << x << endl;     // Output the value of x
	cout << "Value of y=" << y << endl;     // Output the value of y
	return 0;                             // Return 0 to indicate successful execution

}