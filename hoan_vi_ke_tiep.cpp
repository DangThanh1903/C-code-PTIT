#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

void inkq()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sinh()
{
    int i = n - 1;
    while (i > 1 && a[i - 1] > a[i])
        i--;
    if (i == 1 && a[0] == n)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }
    }
    else
    {
        int j = n - 1;
        while (a[i - 1] > a[j])
            --j;
        swap(a[i - 1], a[j]);
        reverse(a + i, a + n);
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
            cin >> a[i];
        }
        sinh();
        inkq();
    }
    return 0;
}