#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;

    int fact = 1;
    vector<int> numbers;
    for (int i = 1; i < n; i++)
    {
        fact *= i;
        numbers.push_back(i);
    }
    numbers.push_back(n);
    string s = "";
    k--;
    
    while (true)
    {
        int x = k / fact;
        int num = numbers[x];
        s = s + to_string(num);
        numbers.erase(numbers.begin() + x);
        if (numbers.size() == 0)
            break;

        k %= fact;
        fact /= numbers.size();
    }

    cout << s;

    return 0;
}