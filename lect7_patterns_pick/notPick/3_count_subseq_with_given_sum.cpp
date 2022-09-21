#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto x : arr)
        cout << x << ' ';
    cout << endl;
}
int subset(int i, int limit, int A[], int sum, int ans)
{

    if (i >= limit)
    {
        if (sum == ans)
            return 1;
        return 0;
    }

    // pick condition.
    int l = subset(i + 1, limit, A, sum + A[i], ans);

    // not pick condition.
    int r = subset(i + 1, limit, A, sum, ans);

    return l + r; // if both funs doesn't satisfies the condn , return false.
}

int main()
{
    int A[] = {2, 1, 2};
    vector<int> arr;
    int ans = 3;
    cout << subset(0, 3, A, 0, ans);

    return 0;
}