#include <bits/stdc++.h>
using namespace std;

int n, a[100], k, b[100], s;

void inkq()
{
    long sum = 0;
    for (int z = 0; z < k; z++)
    {
        sum += b[a[z + 1] - 1];
    }
    if (sum == s)
    {
        cout << "[";
        for (int z = 0; z < k; z++)
        {
            cout << b[a[z + 1] - 1];
            if (z != k - 1)
                cout << " ";
        }
        cout << "] ";
    }
}

void bruh(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            inkq();
        }
        else
        {
            bruh(i + 1);
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n);
        k = n;
        while (k >= 1)
        {
            a[0] = 0;
            bruh(1);
            k--;
        }
        cout << endl;
    }

    return 0;
}