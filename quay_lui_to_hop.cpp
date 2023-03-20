#include <bits/stdc++.h>
using namespace std;

long n, k, x[1000];

void inkq()
{
    for (int i = 1; i <= k; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

int Try(int i)
{
    for (int j = x[i - 1] + 1; j <= n - k + i; j++)
    {
        x[i] = j;
        if (i == k)
        {
            inkq();
        }
        else
        {
            Try(i + 1);
        }
    }
}

int main()
{
    cin >> n >> k;
    Try(1);
    return 0;
}