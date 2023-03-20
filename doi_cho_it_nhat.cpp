#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, a[1000], min, minip, count;
    cin >> test;
    while (test--)
    {
        cin >> n;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            min = a[i];
            minip = i;
            for (int j = i + 1; j < n; j++)
            {
                if (min > a[j])
                {
                    min = a[j];
                    minip = j;
                }
            }
            if (min != a[i])
            {
                swap(a[i], a[minip]);
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}