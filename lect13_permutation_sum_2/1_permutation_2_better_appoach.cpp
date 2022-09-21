#include <bits/stdc++.h>
using namespace std;
int cnt = 1;
void print(vector<int> ds)
{
    for (auto it : ds)
        cout << it << ' ';
    cout << endl;
}

void permutation(int idx, vector<int> ds)
{
    if (idx >= ds.size())
    {
        print(ds);
        return;
    }

    for (int i = idx; i < ds.size(); i++)
    {
        // cout << "cnt : " << idx << ' ' << i << endl;
        swap(ds[i], ds[idx]);
        permutation(idx + 1, ds);
        swap(ds[i], ds[idx]);
        // permutation(i + 1, ds);
    }
}

int main()
{
    vector<int> A = {1, 2, 3};
    permutation(0, A);

    return 0;
}