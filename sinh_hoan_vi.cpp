#include <bits/stdc++.h>
using namespace std;

int n, a[1000], ok = 0;

void inkq()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void sinh()
{
    int i = n - 1;
    while (i > 1 && a[i - 1] > a[i])
        i--;
    if (i == 1 && a[0] == n)
    {
        ok = 1;
    }
    else
    {
        int j = n - 1;
        while (a[i - 1] > a[j])
            --j;
        swap(a[i - 1], a[j]);
        reverse(a + i, a + n);
        inkq();
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
            cout << a[i];
        }
        cout << " ";
        while (ok == 0)
        {
            sinh();
        }
        ok = 0;
        cout << endl;
    }
    return 0;
}