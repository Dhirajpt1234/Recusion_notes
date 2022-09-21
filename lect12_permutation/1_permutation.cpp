#include <bits/stdc++.h>
using namespace std;

void print(vector<int> ds)
{
    for (auto it : ds)
        cout << it << ' ';
    cout << endl;
}

void permutation(vector<int> &A, vector<int> &ds, map<int, bool> &mp)
{
    if (ds.size() == A.size())
    {
        print(ds);
        return;
    }

    for (auto &it : mp)
    {
        if (it.second == false)
        {
            it.second = true;
            ds.push_back(it.first);
            permutation(A, ds, mp);
            ds.pop_back();
            it.second = false;
        }
    }
}

int main()
{

    vector<int> A = {1, 2, 3};
    map<int, bool> mp;
    for (int i = 0; i < A.size(); i++)
        mp[A[i]] = false;

    vector<int> ds;
    permutation(A, ds, mp);
    return 0;
}