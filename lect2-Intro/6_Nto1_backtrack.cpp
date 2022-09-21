#include <bits/stdc++.h>
using namespace std;
void print(int n, int cnt)
{
    if (!cnt)
        return;
    print(n + 1, cnt - 1);
    cout << n << ' ';
}
int main()
{
    print(1, 5);

    return 0;
}