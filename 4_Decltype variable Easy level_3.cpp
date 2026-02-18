#include<iostream>              // Include the iostream library for input/output operations
using namespace std;            // Use the standard namespace to avoid prefixing std:: before standard library names

int main()
{
	/*In this program we will take the char type variable (a) and initialize it then we will use another 
	variable (b) of decltype and use the first variable (a) as the reference and also initialize it and 
	then at last we will print out the result of both the variable to check that what datatype is copied
	from the variable (a)*/
	char a = 'A';              // Declare a char variable 'a' and initialize it with the character 'A'
	decltype (a)b = 'B';      // Declare a variable 'b' using decltype to deduce the type from variable 'a' and initialize it
	cout << "The value of variable a is=" << a << endl;	// Print the value of variable 'a'
	cout << "The value of variable b is=" << b << endl;   // Print the value of variable 'b'
	return 0;               // Return 0 to indicate that the program ended successfully
}