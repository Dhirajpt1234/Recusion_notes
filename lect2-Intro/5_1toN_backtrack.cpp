#include <bits/stdc++.h>
using namespace std;

//print 1 to n using backtrack.
void print(int n, int cnt)
{
    if (!cnt)
        return;
    print(n - 1, cnt - 1); // this is the main statement for backtrack. 
    cout << n << ' ';
}
int main()
{
    print(5, 5);

    return 0;
}