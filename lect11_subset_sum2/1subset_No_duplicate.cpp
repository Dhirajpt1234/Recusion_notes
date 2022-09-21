#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &ds)
{
    for (auto it : ds)
        cout << it << " ";
    cout << endl;
}

void print(vector<vector<int>> ans)
{
    for (auto it : ans)
    {
        print(it);
    }
}

void subset(int idx, vector<int> ds, vector<int> &A, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    for (int i = idx; i < A.size(); i++)
    {
        if (i > idx && A[i] == A[i - 1])
            continue;

        ds.push_back(A[i]);
        subset(i + 1, ds, A, ans);
        ds.pop_back();
    }
}
int main()
{

    vector<int> A = {1, 2, 2, 2, 3, 3};
    sort(A.begin(), A.end());

    vector<int> ds;
    vector<vector<int>> ans;
    subset(0, ds, A, ans);
    print(ans);

    return 0;
}