#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], ok = 0;

void inkq()
{
    for (int i = 0; i < k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void sinh()
{
    int i = k - 1;
    while (a[i] == n - k + i + 1)
        i--;
    if (a[0] == n - k + 1)
        ok = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j < n; j++)
        {
            a[j] = a[j - 1] + 1;
        }
        inkq();
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < k; i++)
        {
            a[i] = i + 1;
            cout << a[i];
        }
        cout << " ";
        while (ok == 0)
        {
            sinh();
        }
        ok = 0;
        cout << endl;
    }
    return 0;
}