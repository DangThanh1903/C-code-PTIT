#include <bits/stdc++.h>
using namespace std;

int n, k, ok;
int a[10000];
void sinh()
{
    int i = 1;
    while (i > 0 && a[i] == n - 2 + i + 1)
        i--;
    if (a[0] == n - 1)
        ok = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j < 2; j++)
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
        for (int i = 0; i < 2; i++)
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
            for (int i = 0; i < 2; i++)
            {
                sum += b[a[i] - 1];
            }
            if (sum == k)
                count++;
            sinh();
        }
        cout << count << endl;
    }
}