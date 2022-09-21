#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int start, int end)
{

    while (start <= end)
    {
        if (s[start++] != s[end--])
            return false;
    }
    return true;
}

void print(vector<string> &ds)
{
    for (int i = 0; i < ds.size(); i++)
        cout << ds[i] << ' ';
    cout << endl;
}

void partition(int index, string s, vector<string> &ds)
{
    // cout << "index : " << index << endl;
    if (index == s.length())
    {
        print(ds);
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
        if (isPalindrome(s, index, i))
        {
            // cout << "index : " << index << endl;
            ds.push_back(s.substr(index, i - index + 1));
            partition(i + 1, s, ds);
            ds.pop_back();
        }
    }
}

int main()
{
    string s = "aabb";
    vector<string> ds;

    partition(0, s, ds);

    return 0;
}