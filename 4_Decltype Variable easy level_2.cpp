#include<iostream>                      // 1. Include the iostream header for input/output operations
using namespace std;                     // 2. Use the standard namespace to avoid prefixing std:: before standard library names

int main()
{
	/*In this program we will take a float data type variable (a) and initialize it
	then we will declare another variable (b) of decltype and initialize it as well
	then we will print out the result of both variables to check that how decltype 
	copies the datatype of variable used as the reference*/
	float a = 2.45;      // 3. Declare a float variable 'a' and initialize it with the value 2.45
	decltype(a) b = 34.5678; // 4. Declare a variable 'b' using decltype to copy the type of 'a' and initialize it with the value 34.5678
	cout << "Value of a=" << a << endl;  // 5. Print the value of variable 'a'
	cout << "Value of b=" << b << endl;  // 6. Print the value of variable 'b'
	return 0; // 7. Return 0 to indicate that the program ended successfully
}