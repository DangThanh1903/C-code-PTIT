#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test, n, m, x;
    vector<long long> a, b;
    cin >> test;
    while (test--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        sort(b.begin(), b.end());
        sort(a.rbegin(), a.rend());
        cout << a[0] * b[0] << endl;
        a.erase(a.begin(), a.end());
        b.erase(b.begin(), b.end());
    }

    return 0;
}