#include <bits/stdc++.h>
using namespace std;

//print n to 1 using count as a parameter.
void print(int n, int cnt)
{
    if (!cnt)
        return;
    cout << n << ' ';
    print(n - 1, cnt - 1);
}
int main()
{
    print(5, 5);

    return 0;
}