#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], ok;

void sinh()
{
    int i = k - 1;
    while (i >= 1 && a[i] == n - k + i + 1)
    {
        --i;
    }
    if (i == 0 && a[0] == n - k + i + 1)
    {
        ok = 0;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; ++j)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    ok = 1;
    int test = 0, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int z = 0; z < k; z++)
    {
        a[z] = z + 1;
    }
    while (ok != 0)
    {
        test = 0;
        for (int i = 0; i < k - 1; i++)
        {
            if (b[a[i] - 1] > b[a[i + 1] - 1])
            {
                test = 1;
                break;
            }
        }
        if (test == 0)
            count++;
        sinh();
    }
    cout << count;
    return 0;
}