/*
Session 12 — Arrays + Recursion (In-Class Code)

Topics:
- Arrays: indexing, input/output, for loop, range-based for
- Recursion: factorial, fibonacci, prime check, gcd (Euclidean)

Tip:
Uncomment ONE demo block at a time to run it.
*/

#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------
// Recursion examples
// ------------------------------------------------------------
int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}

int fib(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

bool isPrimeRec(int n, int i = 2) {
    if (n < 2) {
        return false;
    }

    if (i * i > n) {
        return true;
    }

    if (n % i == 0) {
        return false;
    }

    return isPrimeRec(n, i + 1);
}

int gcdRec(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcdRec(b, a % b);
}

// ------------------------------------------------------------
// Main
// ------------------------------------------------------------
int main() {

    // --------------------------------------------------------
    // Demo 1: Basic array usage (indexing)
    // --------------------------------------------------------
    /*
    int nums[4];
    nums[0] = 1;
    nums[3] = 5;

    cout << "nums[0] = " << nums[0] << endl;
    cout << "nums[3] = " << nums[3] << endl;
    */

    // --------------------------------------------------------
    // Demo 2: String array + printing with loops
    // --------------------------------------------------------
    /*
    string names[3] = {"Ali", "Reza", "Mohammad"};

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    for (string x : names) {
        cout << x << endl;
    }
    */

    // --------------------------------------------------------
    // Demo 3: Read 5 integers into an array and print them
    // --------------------------------------------------------
    /*
    int arr[5];

    for (int i = 0; i < 5; i++) {
        cout << "num " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "You entered:" << endl;

    for (int num : arr) {
        cout << num << endl;
    }
    */

    // --------------------------------------------------------
    // Demo 4: Factorial (recursive)
    // --------------------------------------------------------
    /*
    int n;
    cout << "n: ";
    cin >> n;

    cout << "factorial(" << n << ") = " << factorial(n) << endl;
    */

    // --------------------------------------------------------
    // Demo 5: Fibonacci sequence (recursive)
    // Prints fib(0) to fib(n-1)
    // --------------------------------------------------------
    /*
    int n;
    cout << "n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "fib(" << i << ") = " << fib(i) << endl;
    }
    */

    // --------------------------------------------------------
    // Demo 6: Prime check (recursive)
    // --------------------------------------------------------
    /*
    int n;
    cout << "Prime check num: ";
    cin >> n;

    if (isPrimeRec(n)) {
        cout << "Prime" << endl;
    } else {
        cout << "Not Prime" << endl;
    }
    */

    // --------------------------------------------------------
    // Demo 7: GCD (Euclidean, recursive)
    // --------------------------------------------------------
    /*
    int a, b;
    cout << "num1: ";
    cin >> a;
    cout << "num2: ";
    cin >> b;

    cout << "gcd(" << a << ", " << b << ") = " << gcdRec(a, b) << endl;
    */

    return 0;
}
