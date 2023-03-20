#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test, m, n, x;
    vector<long long> a;
    cin >> test;
    while (test--)
    {
        cin >> m >> n;
        for (int i = 0; i < n + m; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }
    return 0;
}