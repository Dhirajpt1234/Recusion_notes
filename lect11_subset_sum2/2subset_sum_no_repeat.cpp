#include <bits/stdc++.h>
using namespace std;

void print(vector<int> ds)
{
    for (auto it : ds)
        cout << it << ' ';
    cout << endl;
}

void subset(int idx, vector<int> &A, int sum)
{
    cout << sum << endl;
    for (int i = idx; i < A.size(); i++)
    {
        if (i > idx && A[i] == A[i - 1])
            continue;

        subset(i + 1, A, sum + A[i]);
    }
}
int main()
{
    vector<int> A = {1, 2, 2, 2, 3, 3};
    sort(A.begin(), A.end());

    subset(0, A, 0);

    return 0;
}