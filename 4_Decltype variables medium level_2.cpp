#include<iostream>                            // for input output operations
using namespace std;                          // for using standard library functions and objects

int main()
{
	/*In this program we will delare three variables (x,ref,z)
	one by one and initialize them but during the initialization
	of variabe (ref) we will assign it the variable (x) and during
	the initialization of decltype variable (z) we will also assign
	it x as well with the reference of (ref) variable and then we will print out the resluts to check that what
	datatype does z hold*/

	int x{ 10 };                      // declaring an integer variable 'x' and initializing it with the value 10
	int& ref{ x };                    // declaring a reference variable 'ref' that refers to 'x' and initializing it with the value of 'x'
	decltype(ref) z = x; 		  // declaring a variable 'z' using decltype to deduce its type from 'ref' and initializing it with the value of 'x'
	cout << "Value of x=" << x << endl;		// printing the value of variable 'x'
	cout << "The value of ref=" << ref << endl; // printing the value of variable 'ref' which is a reference to 'x', so it will print the same value as 'x'
	cout << "The value of z=" << z << endl;  //	printing the value of variable 'z' which is deduced to be a reference to 'x' due to decltype(ref), so it will also print the same value as 'x'
	return 0;							   // returning 0 to indicate successful execution of the program

}