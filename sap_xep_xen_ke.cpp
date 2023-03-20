#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, a[1000], l[1000], c[1000];
    int x = 0, y = 0;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (i <= n / 2 - 1)
            {
                l[x] = a[i];
                x++;
            }
            else
            {
                c[y] = a[i];
                y++;
            }
        }
        x = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 2 != 0)
            {
                cout << c[y - 1] << " ";
                y--;
            }
            else
            {
                cout << l[x] << " ";
                x++;
            }
        }
        cout << endl;
        x = y = 0;
    }

    return 0;
}