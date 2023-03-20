#include <bits/stdc++.h>
using namespace std;

long long n, X, a[1000];

long find_X(long long t)
{
    n /= 2;
    if (n % 2 == 1)
        n++;
    if (X != a[t])
    {
        if (X > a[t])
        {
            cout << "s" << endl;
            find_X(t + n / 2);
        }
        else
        {
            cout << "w" << endl;
            find_X(t - n / 2);
        }
    }
    else
    {
        cout << "a" << endl;
        return t;
    }
    return -1;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> X;
        for (int v = 0; v < n; v++)
        {
            cin >> a[v];
        }
        if (n % 2 == 0)
            cout << find_X(n / 2 + 1) << endl;
        else
            cout << find_X(n / 2) << endl;
    }

    return 0;
}