#include<iostream>
using namespace std;


void print1toN(int i, int n)
{
    if (i > n) return;

    cout<<" "<<i<<endl;
    print1toN(i+1, n);
}

int main()
{
    int i = 1;
    int n = 5;
    print1toN(i, n);
}