#include <bits/stdc++.h>
using namespace std;

void printarray(vector<int> arr)
{
    for (auto it : arr)
        cout << it << ' ';
    cout << endl;
}

void reverse(vector<int> &arr, int n)
{
    if (n >= (arr.size() / 2))
        return;
    swap(arr[n], arr[arr.size() - 1 - n]);
    reverse(arr, n + 1);
}
int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};
    printarray(arr);
    reverse(arr, 0);
    printarray(arr);

    return 0;
}