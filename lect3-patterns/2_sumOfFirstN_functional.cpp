#include <bits/stdc++.h>
using namespace std;

// This type of pattern is called functional recursion.
// we are returning the combinatin of current varibale and ans of next recursion.

int sum(int n)
{
    if (n == 1)
        return 1;
    return n + sum(n - 1);
}

int main()
{
    cout << sum(5);

    return 0;
}