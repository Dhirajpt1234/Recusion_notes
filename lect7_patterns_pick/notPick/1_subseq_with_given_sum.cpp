#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto x : arr)
        cout << x << ' ';
    cout << endl;
}
void subset(int i, int limit, int A[], vector<int> arr, int sum, int ans)
{

    if (i >= limit)
    {
        if (sum == ans)
            print(arr);
        return;
    }

    // pick condition.
    arr.push_back(A[i]);
    subset(i + 1, limit, A, arr, sum + A[i], ans);

    // not pick condition.
    arr.pop_back();
    subset(i + 1, limit, A, arr, sum, ans);
}

int main()
{
    int A[] = {2, 1, 2};
    vector<int> arr;
    int ans = 3;
    subset(0, 3, A, arr, 0, ans);

    return 0;
}