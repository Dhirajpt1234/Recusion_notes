#include <bits/stdc++.h>
using namespace std;

void fact(int n, int ans)
{
    if (n == 1 || n == 0)
    {
        cout << ans;
        return;
    }
    fact(n - 1, ans * n);
}
int main()
{
    fact(5, 1);

    return 0;
}