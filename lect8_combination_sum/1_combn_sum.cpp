#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (auto it : arr)
        cout << it << " ";
    cout << endl;
}

void combnSum(int i, int limit, int target, vector<int> A, vector<int> arr)
{
    if (i >= limit)
    {
        if (target == 0)
        {
            print(arr);
        }
        return;
    }

    if (target >= A[i])
    {
        arr.push_back(A[i]);
        combnSum(i, limit, target - A[i], A, arr);
        arr.pop_back();
    }

    combnSum(i + 1, limit, target, A, arr);
}

int main()
{
    vector<int> A = {2, 3, 6, 7};
    int target = 7;
    vector<int> arr;
    int limit = A.size();
    combnSum(0, limit, target, A, arr);

    return 0;
}