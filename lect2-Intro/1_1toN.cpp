#include <bits/stdc++.h>
using namespace std;
int cnt = 1;

// print 1 to n using global count variable.

void print(int n)
{
    if (cnt > 5)
        return;
    cout << n << ' ';
    cnt++;
    print(n + 1);
}

int main()
{
    print(1);
    return 0;
}
