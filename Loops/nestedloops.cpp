#include <iostream>
using namespace std;

void simplePyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

void invertedPyramid(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

void rightAlignedTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= i; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

void diamondPattern(int n) {
    // Upper half
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int choice, n;

    cout << "Select a pattern to display:\n";
    cout << "1. Simple Pyramid\n";
    cout << "2. Inverted Pyramid\n";
    cout << "3. Right-Aligned Triangle\n";
    cout << "4. Diamond Pattern\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the number of rows: ";
    cin >> n;

    switch (choice) {
        case 1:
            simplePyramid(n);
            break;
        case 2:
            invertedPyramid(n);
            break;
        case 3:
            rightAlignedTriangle(n);
            break;
        case 4:
            diamondPattern(n);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
