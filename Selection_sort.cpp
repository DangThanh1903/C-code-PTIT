#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

void inkq()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void sx(int i)
{
    for (int j = i; j < n; j++)
    {
        if (a[i] > a[j])
            swap(a[i], a[j]);
    }
    if (i == n - 1)
        inkq();
    else
        sx(i + 1);
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sx(0);
    return 0;
}
