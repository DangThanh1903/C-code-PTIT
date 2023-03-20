#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, count;
    int a[100000];
    cin >> test;
    while (test--)
    {
        count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] != a[i] + 1 && a[i + 1] != a[i])
                count += a[i + 1] - a[i] - 1;
        }
        cout << count << endl;
    }

    return 0;
}