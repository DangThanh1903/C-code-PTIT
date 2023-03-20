#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, k, count;
    int a[100];
    cin >> test;
    while (test--)
    {
        count = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == k)
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}