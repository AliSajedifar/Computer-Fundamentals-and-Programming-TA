/*
Session 10 — Functions + Control Flow Review (In-Class Code)
Topics:
- void functions + return
- boolean functions (isEven, isPrime)
- nested loops (square, triangle patterns)
- break / continue

Tip:
Uncomment ONE demo block at a time to run it.
*/

#include <iostream>
using namespace std;

// ------------------------------------------------------------
// Utility
// ------------------------------------------------------------
void printLine() {
    cout << "\n------------------------" << endl;
}

// ------------------------------------------------------------
// 1) Basic boolean functions
// ------------------------------------------------------------
bool isEven(int num) {
    return (num % 2) == 0;
}

bool isPrime(int num) {
    if (num <= 1) {
      return false;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// ------------------------------------------------------------
// 2) Basic void function (prints output)
// ------------------------------------------------------------
void printUserInfo(string name, int age) {
    int currentYear = 2025;
    cout << name << " was born in " << (currentYear - age) << endl;
}

// ------------------------------------------------------------
// 3) Pattern printing (nested loops)
// ------------------------------------------------------------
void printSquare(int num, char c) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << c;
        }
        cout << endl;
    }
}

void printTriangle(int num, char c) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << c;
        }
        cout << endl;
    }
}

void printReversedTriangle(int num, char c) {
    for (int i = num; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << c;
        }
        cout << endl;
    }
}

// ------------------------------------------------------------
// Main
// ------------------------------------------------------------
int main() {

    // --------------------------------------------------------
    // Demo 1: Even / Odd
    // --------------------------------------------------------
    /*
    int n;
    cout << "Num: ";
    cin >> n;

    if (isEven(n)) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    printLine();
    */

    // --------------------------------------------------------
    // Demo 2: User info (name + age)
    // --------------------------------------------------------
    /*
    int age;
    string name;

    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age;

    printUserInfo(name, age);
    printLine();
    */

    // --------------------------------------------------------
    // Demo 3: Prime / Not Prime
    // --------------------------------------------------------
    /*
    int n;
    cout << "Num: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }

    printLine();
    */

    // --------------------------------------------------------
    // Demo 4: Square pattern
    // --------------------------------------------------------
    /*
    int n;
    char c;

    cout << "Size: ";
    cin >> n;

    cout << "Char: ";
    cin >> c;

    printSquare(n, c);
    printLine();
    */

    // --------------------------------------------------------
    // Demo 5: Triangle pattern
    // --------------------------------------------------------
    /*
    int n;
    char c;

    cout << "Height: ";
    cin >> n;

    cout << "Char: ";
    cin >> c;

    printTriangle(n, c);
    printLine();
    */

    // --------------------------------------------------------
    // Demo 6: Reversed triangle pattern
    // --------------------------------------------------------
    /*
    int n;
    char c;

    cout << "Height: ";
    cin >> n;

    cout << "Char: ";
    cin >> c;

    printReversedTriangle(n, c);
    printLine();
    */

    // --------------------------------------------------------
    // Demo 7: Diamond-like pattern (triangle + reversed triangle)
    // --------------------------------------------------------
    /*
    int n;
    char c;

    cout << "Height: ";
    cin >> n;

    cout << "Char: ";
    cin >> c;

    printTriangle(n, c);
    printReversedTriangle(n - 1, c);
    printLine();
    */

    // --------------------------------------------------------
    // Demo 8: break (keep reading until user enters 0)
    // --------------------------------------------------------
    /*
    while (true) {
        int x;
        cout << "Enter a number (0 to stop): ";
        cin >> x;

        if (x == 0) {
            break;
        }

        cout << "You entered: " << x << endl;
    }

    printLine();
    */

    // --------------------------------------------------------
    // Demo 9: continue (skip negative numbers)
    // --------------------------------------------------------
    /*
    for (int i = 1; i <= 5; i++) {
        int x;
        cout << "Enter a number: ";
        cin >> x;

        if (x < 0) {
            cout << "Skipped" << endl;
            continue;
        }

        cout << "Accepted: " << x << endl;
    }

    printLine();
    */

    return 0;
}
