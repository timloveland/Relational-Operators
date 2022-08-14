/*************************************
 * Tim Loveland
 * 8/14/2022  
 * Relational Operators
 * **********************************/
// Preprocessor directive
#include <iostream>
#include <iomanip> 
using namespace std;

// Function prototypes go here

int main()
{
    // Define variables
    int num1 {}, num2 {};
    
    // Show true/false
    cout << boolalpha;
    // Ask user to enter integers
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    
    // Show comparison
    cout << endl;
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
    
    // Define new variables
    const int lower {10};
    const int upper {20};
    
    // Show comparison (lower)
    cout << "\nEnter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    
    // Show comparison (upper)
    cout << "\nEnter an integer that is less than or equal to " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
    
	return 0;
}
