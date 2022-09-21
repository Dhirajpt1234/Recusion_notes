#include <bits/stdc++.h>
using namespace std;

void palindrome(string s, int i)
{
    if (i == s.length() / 2 + 1)
    {
        cout << "palindrome";
        return;
    }
    if (s[i] != s[s.length() - 1 - i])
    {
        cout << "Not palindrome";
        return;
    }

    palindrome(s, i + 1);
}

int main()
{
    string s;
    cin >> s;

    palindrome(s, 0);
    return 0;
}