#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, k, x;
    cin >> test;
    vector<int> a;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < k; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }

    return 0;
}