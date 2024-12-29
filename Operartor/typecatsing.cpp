//  Implicit Typecasting (Type Coercion)
// This is done automatically by the compiler.
// It occurs when you assign a value of one data type to a variable of a compatible type.
// No explicit intervention is required.

#include <iostream>
using namespace std;

int main() {
    int intVal = 10;
    float floatVal = intVal; // Implicit conversion from int to float
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to float: " << floatVal << endl;



// 2. Explicit Typecasting
// This requires the programmer to explicitly specify the type conversion.
// It is used when you want to override the compiler's automatic conversions or convert between incompatible types.
// Syntax:
// (type)value


     floatVal = 3.14;
     intVal = (int)floatVal; // Explicit typecasting from float to int
    cout << "Float value: " << floatVal << endl;
    cout << "Converted to int: " << intVal << endl;
    return 0;
}
