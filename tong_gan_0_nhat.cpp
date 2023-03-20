#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, min;
    int a[1000];
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        min = a[0] + a[1];
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(a[i] + a[j]) < abs(min))
                    min = a[i] + a[j];
            }
        }
        cout << min << endl;
    }

    return 0;
}