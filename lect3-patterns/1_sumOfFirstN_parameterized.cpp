#include <bits/stdc++.h>
using namespace std;

// in this we have passed our ans in function as a parameter.
// This type of pattern is called parameterized recursion.
void sum(int n, int ans)
{
    if (n == 0)
    {
        cout << ans;
        return;
    }

    sum((n - 1), (ans + n));
}

int main()
{
    sum(5, 0);

    return 0;
}