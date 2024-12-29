#include <iostream>
using namespace std;

void modifyReference(int &num) {
    num = 100; // Changing the original variable through reference
    cout << "Inside function: " << num << endl; // Will print 100
}

int main() {
    int num = 10;
    cout << "Before function call: " << num << endl; // Will print 10
    modifyReference(num); // Pass by reference
    cout << "After function call: " << num << endl; // Will print 100 (changed)
    return 0;
}
