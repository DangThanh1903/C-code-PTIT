#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, k;
    long a[100000];
    long max;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - k + 1; i++)
        {
            max = a[i];
            for (int j = i; j < i + k; j++)
            {
                if (max < a[j])
                    max = a[j];
            }
            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}