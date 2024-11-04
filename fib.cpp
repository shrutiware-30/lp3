#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci numbers
int recursive_fibonacci(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

// Function to print Fibonacci series using recursion
void print_recursive_fibonacci_series(int n)
{
    cout << "Fibonacci series using recursion: ";
    for (int i = 0; i < n; i++) {
        cout << recursive_fibonacci(i) << " ";
    }
    cout << endl;
}

// Function to print Fibonacci series using iteration
void print_iterative_fibonacci_series(int n)
{
    int prev1 = 0, prev2 = 1, curr = 0;

    cout << "Fibonacci series using iteration: ";
    if (n >= 1) cout << prev1 << " ";
    if (n >= 2) cout << prev2 << " ";

    for (int i = 3; i <= n; i++)
    {
        curr = prev1 + prev2;
        cout << curr << " ";
        prev1 = prev2;
        prev2 = curr;
    }
    cout << endl;
}

// Menu-driven main function
int main()
{
    int choice, n;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Print Fibonacci Series using Iteration\n";
        cout << "2. Print Fibonacci Series using Recursion\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of terms in the Fibonacci series: ";
            cin >> n;
            print_iterative_fibonacci_series(n);
            break;

        case 2:
            cout << "Enter the number of terms in the Fibonacci series: ";
            cin >> n;
            print_recursive_fibonacci_series(n);
            break;

        case 3:
            cout << "Exiting the program...\n";
            break;

        default:
            cout << "Invalid choice! Please select again.\n";
            break;
        }
    } while (choice != 3);

    return 0;
}

// Fibonacci Series using Iteration and Recursion
// Iteration :
// Time Complexity = O(N)
// Space Complexity : O(1)
// Recursion :
// Time Complexity : O(1.618^N)
// Space Complexity : O(N) due to Auxilliary Stack Space
// Time Complexity is derived using Binet's Formula
// Time Complexity = 1/root(5)*[(1+root(5)/2)^n-(1-root(5)/2)^n]