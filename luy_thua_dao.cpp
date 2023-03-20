#include <bits/stdc++.h>
using namespace std;

long long pow1(long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        b /= 2;
        a *= a;
        cout << res << "+" << b << endl;
    }
    return res;
}

int main()
{
    int test;
    string n;
    vector<int> a;
    long long res1, res2;
    cin >> test;
    while (test--)
    {
        res1 = 0;
        res2 = 0;
        cin >> n;
        for (int i = 0; i < n.size(); i++)
        {
            a.push_back(n[i] - 48);
            res1 += ((long)n[i] - 48) * pow1(10, i);
        }
        reverse(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            res2 += a[i] * pow1(10, i);
        }
        cout << pow1(res2, res1) << endl;
        a.erase(a.begin(), a.end());
    }
    return 0;
}