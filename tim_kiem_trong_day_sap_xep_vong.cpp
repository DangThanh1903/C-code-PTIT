#include <bits/stdc++.h>
using namespace std;

int main()
{
    long test, n, k, x, pos;
    vector<long> a;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                pos = i;
                break;
            }
        }
        cout << pos + 1 << endl;
        a.erase(a.begin(), a.end());
    }
    return 0;
}