#include <iostream>
using namespace std;

void modifyValue(int num) {
    num = 100; // Changing the local copy of num
    cout << "Inside function: " << num << endl; // Will print 100
}

int main() {
    int num = 10;
    cout << "Before function call: " << num << endl; // Will print 10
    modifyValue(num); // Pass by value
    cout << "After function call: " << num << endl; // Will still print 10 (no change)
    return 0;
}
