#include <bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[10000];
void sinh()
{
    int i = 2;
    while (i > 0 && a[i] == n - 3 + i + 1)
        i--;
    if (a[0] == n - 2)
        ok = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j < 3; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int test, count;
    long b[5000], sum;
    cin >> test;
    while (test--)
    {
        count = ok = 0;
        cin >> n >> k;
        for (int i = 0; i < 3; i++)
        {
            a[i] = i + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        while (ok == 0)
        {
            sum = 0;
            for (int i = 0; i < 3; i++)
            {
                sum += b[a[i] - 1];
            }
            if (sum < k)
                count++;
            sinh();
        }
        cout << count << endl;
    }
}