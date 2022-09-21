#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
}

void combn(int idx, int target, vector<int> &A, vector<int> arr)
{

    if (target == 0)
    {
        print(arr);
        return;
    }

    for (int i = idx; i < A.size(); i++)
    {
        if (i > idx && A[i] == A[i - 1])
            continue;
        if (A[i] > target)
            break;

        arr.push_back(A[i]);
        combn(i + 1, target - A[i], A, arr);
        arr.pop_back();
    }
}

int main()
{
    vector<int> A = {1, 1, 1, 2, 2};

    // set<int> st;
    // for (auto it : A)
    //     st.insert(it);
    // for (auto it : st)
    //     B.push_back(it);

    vector<int> arr;
    int target = 4;
    combn(0, target, A, arr);
    return 0;
}