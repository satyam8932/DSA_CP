#include <iostream>
using namespace std;

int fibbo(int n)
{
    if ( n == 1 || n == 0) return n;

    return fibbo(n-1) + fibbo(n-2);
}

int main()
{
    for ( int i = 0; i < 10; i++)
    {
        cout << "Fibonacci number at position " << i << " is: " << fibbo(i) << endl;
    }

    return 0;
}