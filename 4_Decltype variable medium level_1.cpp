#include<iostream>                            // for input output operations
using namespace std;                          // for using standard library functions and objects

int main()
{
	/*In this program we will use two variables (a,b) we will declare first variable (a) 
	as a constant variable and initialize it. Then we will use  a second variable (b) as 
	a decltype and initialze it as well. Then we will also check that wether the variable 
	of decltype is also constant or not*/

	const int a{ 10 };                      // declaring a constant variable 'a' and initializing it with the value 10
	decltype(a) b{ 20 };                    // declaring a variable 'b' using decltype to deduce its type from 'a' and initializing it with the value 20
	cout << "Value of a=" << a << endl;     // printing the value of variable 'a'
	cout << "Value of b=" << b << endl;     // printing the value of variable 'b'
	cout << "Changing the value of b=";		// printing a message to indicate that we are changing the value of variable 'b'
	//b{ 30 };					            //changing the value of variable 'b' to 30 MAKE AN error because 'b' is also a constant variable due to decltype(a) which deduces the type of 'a' and since 'a' is a constant variable, 'b' also becomes a constant variable and cannot be modified after initialization
	return 0;                               // returning 0 to indicate successful execution of the program
}