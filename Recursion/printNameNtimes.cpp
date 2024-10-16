// When a function calls itself

#include<iostream>
#include<string>
using namespace std;


void printName(string name, int n)
{
    if (n == 0)
    {
        return ;
    }
    cout << name << endl;
    printName(name, n - 1);
}

int main()
{
    string s = "Satyam";
    int n = 5;
    printName(s, n);
}