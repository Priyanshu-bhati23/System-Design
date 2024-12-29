#include <iostream>
using namespace std;

// Function declaration
// This function takes two integers as input and returns their sum
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}

int main() {
    int num1, num2;
    
    // Asking user for input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calling the function and storing the result
    int result = add(num1, num2);

    // Displaying the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0; // Indicate successful execution
}
