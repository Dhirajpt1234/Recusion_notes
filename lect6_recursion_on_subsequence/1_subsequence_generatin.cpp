#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void subset(int i, int limit, int A[], vector<int> arr)
{
    if (i >= limit)
    {
        if (arr.size() > 0)
            print(arr);
        return;
    }

    // pick part
    arr.push_back(A[i]);
    subset(i + 1, limit, A, arr);
    // Not pick part
    arr.pop_back();
    subset(i + 1, limit, A, arr);
}

int main()
{
    int A[] = {3, 1, 2};
    vector<int> arr;
    subset(0, 3, A, arr);

    return 0;
}