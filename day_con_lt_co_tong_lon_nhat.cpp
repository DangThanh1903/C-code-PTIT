#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;
    long sum1, sum2;
    int a[1000];
    cin >> test;
    while (test--)
    {
        sum1 = sum2 = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
            if (sum1 < 0)
                sum1 = 0;
            if (sum2 < sum1)
                sum2 = sum1;
        }
        cout << sum2 << endl;
    }
    return 0;
}