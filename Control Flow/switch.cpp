#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Enter you rgrade" << endl;

    cin >> grade;
    if (grade == 'A')
    {
        cout << grade;
    }
    else if (grade == 'B')
    {
        cout << grade;
    }
    else if (grade == 'c')
    {
        cout << grade;
    }
    else if (grade == 'D')
    {
        cout << grade;
    }
    else if (grade == 'E')
    {
        cout << grade;
    }
    else if (grade == 'F')
    {
        cout << grade;
    }
    else
    {
        cout << "suspended" << endl;
    }

    switch (grade)
    { // not string,float vlaues,range cannot be checked-->expression must have a constant value

    case 'A':
        cout << grade;
    case 'B':
        cout << grade;
    case 'C':
        cout << grade;
    case 'D':
        cout << grade;
    default:
        cout << "Suspend" << endl;
    }

    return 0;
}