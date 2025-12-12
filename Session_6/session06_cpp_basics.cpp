/*
Session 06 — C++ Basics (In-Class Code)

This file contains all examples written in class.
Each section demonstrates one concept.
Uncomment ONE section at a time to run it.
*/

#include <iostream>
using namespace std;

int main() {

    // ------------------------------------------------------------
    // 0) Comments in C++
    // ------------------------------------------------------------

    // This is a single-line comment

    /*
        This is a multi-line comment.
        It can span multiple lines.
    */

    // ------------------------------------------------------------
    // 1) Basic output (cout) and variables
    // ------------------------------------------------------------
    /*
    cout << "Hello world!" << endl;
    cout << "Happy Mother's Day" << endl;

    string name = "Reza";
    int age = 20;
    double height = 180.5;
    char grade = 'A';
    bool passed = true;

    cout << "Name: " << name << " | Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl; // 1 = true, 0 = false
    */

    // ------------------------------------------------------------
    // 2) Input (cin) — read and print an integer
    // ------------------------------------------------------------
    /*
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Your number is: " << x << endl;
    */

    // ------------------------------------------------------------
    // 3) Rectangle area
    // Write a program that reads length and width and prints the area.
    // ------------------------------------------------------------
    /*
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int area = length * width;
    cout << "Area is: " << area << endl;
    */

    // ------------------------------------------------------------
    // 4) Name and age sentence
    // Write a program that prints: "NAME is AGE years old."
    // ------------------------------------------------------------
    /*
    string name;
    int age;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << name << " is " << age << " years old." << endl;
    */

    // ------------------------------------------------------------
    // 5) Sum, average, min and max
    // ------------------------------------------------------------
    /*
    int a, b;

    cout << "Enter num1: ";
    cin >> a;

    cout << "Enter num2: ";
    cin >> b;

    int sum = a + b;
    double avg = (a + b) / 2.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    cout << "Min = " << min(a, b) << endl;
    cout << "Max = " << max(a, b) << endl;
    */

    // ------------------------------------------------------------
    // 6) Arithmetic operators: %, ++, --
    // ------------------------------------------------------------
    /*
    int x = 5;
    int y = 3;

    cout << "x % y = " << (x % y) << endl;

    x++;
    y--;

    cout << "x after x++ = " << x << endl;
    cout << "y after y-- = " << y << endl;
    */

    // ------------------------------------------------------------
    // 7) Logical operators and comparisons
    // ------------------------------------------------------------
    /*
    bool x = true;
    bool y = false;

    cout << "(x || y) = " << (x || y) << endl;
    cout << "(x && y) = " << (x && y) << endl;
    cout << "(!x) = " << (!x) << endl;
    cout << "!!x = " << (!!x) << endl;

    cout << "(x > y)  = " << (x > y) << endl;
    cout << "(x == y) = " << (x == y) << endl;

    cout << "Complex expression: "
         << ((!(x <= y)) && (x > y)) << endl;
    */

    // ------------------------------------------------------------
    // 8) Divisibility check (NO if)
    // Write a program that prints 1 if c is divisible by both a and b.
    // ------------------------------------------------------------
    /*
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << ((c % a == 0) && (c % b == 0)) << endl;
    */

    return 0;
}
