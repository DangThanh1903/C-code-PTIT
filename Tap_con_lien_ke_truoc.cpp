#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], b[1000], ok;

void sinh()
{
    int i;
    i = k - 1;
    while (a[i] == a[i - 1] + 1 && i >= 1)
    {
        i--;
    }
    if (a[i] != i + 1 && i != 0)
    {
        a[i]--;
        for (int v = i + 1; v <= k; v++)
        {
            a[v] = n - k + v + 1;
        }
    }
    else
        for (int v = 0; v < k; v++)
        {
            a[v] = n - k + v + 1;
        }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ok = 0;
        cin >> n >> k;
        for (int z = 0; z < k; z++)
        {
            cin >> a[z];
        }
        sinh();
        for (int j = 0; j < k; j++)
        {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}