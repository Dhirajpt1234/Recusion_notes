#include <bits/stdc++.h>
using namespace std;

//print n to 1 using global count variable.

int cnt = 0;
void print(int n)
{
    if (cnt > 4)
        return;
    cout << n << ' ';
    cnt++;
    print(n - 1);
}

int main()
{
    print(5);
    return 0;
}