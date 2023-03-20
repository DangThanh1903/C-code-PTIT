#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], b[1000], sum, ok = 0;
void testkq()
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            sum += b[i];
    }
    if (sum == k)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
}

void sinh()
{
    int i = n - 1;
    while (a[i] == 1)
        i--;
    if (i < 0)
        ok = 1;
    else
    {
        a[i] = 1;
        for (int j = i + 1; j < n; j++)
        {
            a[j] = 0;
        }
        testkq();
    }
}

int main()
{
    int count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
        cin >> b[i];
    }
    while (ok == 0)
    {
        sinh();
        if (sum == k)
            count++;
    }
    cout << count;
    return 0;
}