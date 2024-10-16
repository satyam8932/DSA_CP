#include<iostream>
using namespace std;

// Function to print numbers from 1 to n using backtracking
void print1toNBacktrack(int n)
{
    if (n <= 0)
    {
        return;
    }

    // Recursive call before printing to move towards the base case first
    print1toNBacktrack(n - 1);

    // Print after the recursive call to print numbers in backtrack order
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    print1toNBacktrack(n); // Call the function

    return 0;
}
