#include <bits/stdc++.h>
using namespace std;

int main()
{
    long test, n, k, x, res;
    vector<long> a;
    cin >> test;
    while (test--)
    {
        res = -1;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
                res = 1;
        }
        cout << res << endl;
        a.erase(a.begin(), a.end());
    }
    return 0;
}