#include <iostream>
using namespace std;

int main()
{
    // unary operator
    int a = 2;
    cout << (a++) << endl;
    cout << a << endl;
    a++;
    cout << a << endl;

    int b = 3;
    b--;
    cout << b << endl;
    cout << (++b) << endl;
    cout << (--b) << endl;
    cout << (b--) << endl;

    // Arithmatic opeartors

    a = 10;
    b = 5;

    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a / b) << endl;
    cout << (a * b) << endl;
    cout << (a % b) << endl; //---->reminder

    // Relational operator

    cout << (10 > 5) << endl;
    cout << (10 < 5) << endl;
    cout << (10 == 5) << endl;
    cout << (10 <= 5) << endl;
    cout << (10 >= 5) << endl;
    cout << (10 != 5) << endl;

    // Logical operatpr

    bool cond1 = true;
    bool cond2 = true;
    bool cond3 = false;

    if (cond1 && cond2 && cond3)
    {
        cout << "all condtions re true";
    }
    else if (cond1 || cond2 || cond3)
    {
        cout << "at least one is true";
    }
    else
    {
        cout << "nothing";
    }

    if (cond1 && cond2 && !cond3)
    {
        cout << "all condtions re true";
    }
    else if (cond1 || cond2 || cond3)
    {
        cout << "at least one is true";
    }
    else
    {
        cout << "nothing";
    }

    // ASSIGNMMET OPERATOR
    int x = 10;
    int y = 5;

    x += y; // x = x + y (x becomes 15)
    cout << "x += y: " << x << endl;

    x -= y; // x = x - y (x becomes 10)
    cout << "x -= y: " << x << endl;

    x *= y; // x = x * y (x becomes 50)
    cout << "x *= y: " << x << endl;

    x /= y; // x = x / y (x becomes 10)
    cout << "x /= y: " << endl;

    // BITWISE OPERTOR

    a = 5;              // 0101 in binary
    b = 3;              // 0011 in binary
    int result = a & b; // Result: 0001 in binary (1 in decimal)
    cout << "a & b = " << result << endl;

    a = 5;          // 0101 in binary
    b = 3;          // 0011 in binary
    result = a | b; // Result: 0111 in binary (7 in decimal)
    cout << "a | b = " << result << endl;

    a = 5;          // 0101 in binary
    b = 3;          // 0011 in binary
    result = a ^ b; // Result: 0110 in binary (6 in decimal)
    cout << "a ^ b = " << result << endl;

    a = 5;       // 0101 in binary
    result = ~a; // Result: 1010 in binary (-6 in decimal)
    cout << "~a = " << result << endl;


    a = 5;  // 0101 in binary
    result = a << 1;  // Result: 1010 in binary (10 in decimal)
    cout << "a << 1 = " << result << endl;

    a = 5;  // 0101 in binary
    result = a >> 1;  // Result: 0010 in binary (2 in decimal)
    cout << "a >> 1 = " << result << endl;
    return 0;

     a = 5, b = 3;
    a &= b;  // a = a & b (Result: 1)
    cout << "a &= b: " << a << endl;
    a |= b;  // a = a | b (Result: 3)
    cout << "a |= b: " << a << endl;
    a ^= b;  // a = a ^ b (Result: 0)
    cout << "a ^= b: " << a << endl;
    
}