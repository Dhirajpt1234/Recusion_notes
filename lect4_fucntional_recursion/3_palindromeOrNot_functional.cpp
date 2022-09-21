#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i)
{
    if (i == s.length() / 2 + 1)
        return true;
    if (s[i] != s[s.length() - 1 - i])
        return false;

    return palindrome(s, i + 1);
}

int main()
{
    string s;
    cin >> s;

    if (palindrome(s, 0))
        cout << "palindrome ";
    else
        cout << "Not Palindrome ";

    return 0;
}