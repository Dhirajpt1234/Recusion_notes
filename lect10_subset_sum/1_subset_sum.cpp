#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
}

void subset_sum(int i, int sum, vector<int> &A, vector<int> &ans)
{

    if (i >= A.size())
    {
        ans.push_back(sum);
        return;
    }

    // pick condn
    subset_sum(i + 1, sum + A[i], A, ans);

    // not pick condn
    subset_sum(i + 1, sum, A, ans);
}

int main()
{
    vector<int> A = {2, 4, 5};
    vector<int> ans;

    subset_sum(0, 0, A, ans);
    print(ans);

    return 0;
}