#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto x : arr)
        cout << x << ' ';
    cout << endl;
}
bool subset(int i, int limit, int A[], vector<int> &arr, int sum, int ans)
{

    if (i >= limit)
    {
        if (sum == ans)
        {
            print(arr);
            return true;
        }
        return false;
    }

    // pick condition.
    arr.push_back(A[i]);
    if (subset(i + 1, limit, A, arr, sum + A[i], ans)) // if this fun satisfies the given condition  , no need to call the further funs. so return true;
        return true;

    // not pick condition.
    arr.pop_back();
    if (subset(i + 1, limit, A, arr, sum, ans)) // if this fun satisfies the given condition  , no need to call the further funs. so return true;
        return true;

    return false; // if both funs doesn't satisfies the condn , return false.
}

int main()
{
    int A[] = {2, 1, 2};
    vector<int> arr;
    int ans = 3;
    subset(0, 3, A, arr, 0, ans);

    return 0;
}