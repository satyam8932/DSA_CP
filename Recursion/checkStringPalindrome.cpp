#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string s, int start, int end)
{
    if (start >= end) return true;
    if (s[start]!=s[end]) return false;
    return checkPalindrome(s, start+1, end-1);
}

int main() {
    string s = "madam";  // Example string to test
    if (checkPalindrome(s, 0, s.length() - 1)) {
        cout << s << " is a palindrome." << endl;
    } else {
        cout << s << " is not a palindrome." << endl;
    }

    return 0;
}