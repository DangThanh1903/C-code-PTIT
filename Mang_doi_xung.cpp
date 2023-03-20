#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, a[100], ok;
    cin >> test;
    while (test--)
    {
        ok = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <= n / 2; i++)
        {
            if (a[i] != a[n - i - 1])
                ok = 1;
        }
        if (ok == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}