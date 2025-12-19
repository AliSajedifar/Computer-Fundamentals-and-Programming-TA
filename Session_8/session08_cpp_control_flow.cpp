/*
Session 08 — C++ Basics (In-Class Code)
Topics:
- if / else if / else
- while loop
- infinite loop + break
- number guessing game (rand + srand)
- digit processing (print digits / reverse number)

Tip:
Uncomment ONE section at a time to run it.
*/

#include <iostream>
#include <cstdlib>  // rand, srand
#include <ctime>    // time
using namespace std;

int main() {

    // ------------------------------------------------------------
    // 1) Compare two numbers (if / else if / else)
    // ------------------------------------------------------------
    /*
    int x, y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    if (x > y) {
        cout << "x > y" << endl;
    } else if (x < y) {
        cout << "x < y" << endl;
    } else {
        cout << "x = y" << endl;
    }

    cout << "\n\tThe End" << endl;
    */

    // ------------------------------------------------------------
    // 2) while loop (print 1..5)
    // ------------------------------------------------------------
    /*
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i++;  // i = i + 1
    }

    cout << "\n\tThe End" << endl;
    */

    // ------------------------------------------------------------
    // 3) Infinite loop + break (repeat compare until user stops)
    // ------------------------------------------------------------
    /*
    while (true) {
        int x, y;
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;

        if (x > y) {
            cout << "x > y" << endl;
        } else if (x < y) {
            cout << "x < y" << endl;
        } else {
            cout << "x = y" << endl;
        }

        char choice;
        cout << "Continue? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N') {
            break;
        }
    }

    cout << "\n\tThe End" << endl;
    */

    // ------------------------------------------------------------
    // 4) Number guessing game (random + hints + attempts)
    // ------------------------------------------------------------
    /*
    srand(time(0));

    int secret = rand() % 101;  // 0..100
    int attempts = 0;
    int guess;

    cout << "Guess a number (0..100): ";

    while (true) {
        cin >> guess;
        attempts++;

        if (guess == secret) {
            cout << "Correct! Attempts: " << attempts << endl;
            break;
        } else if (guess > secret) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Too low! Try again: ";
        }
    }
    */

    // ------------------------------------------------------------
    // 5) Print digits of a number (from last digit to first digit)
    // Example: 1234 -> 4321
    // ------------------------------------------------------------
    /*
    int n;
    cout << "Number: ";
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (n < 0) {
        cout << "-";
        n = -n;
    }

    while (n > 0) {
        cout << (n % 10);
        n /= 10;
    }
    cout << endl;
    */

    // ------------------------------------------------------------
    // 6) Reverse a number (build reversed value)
    // Example: 12030 -> 3021
    // ------------------------------------------------------------
    /*
    int n;
    cout << "Number: ";
    cin >> n;

    int original = n;
    int reversed = 0;

    if (n < 0) n = -n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original < 0) reversed = -reversed;

    cout << "Reversed: " << reversed << endl;
    */

    return 0;
}
