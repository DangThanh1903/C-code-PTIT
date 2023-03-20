#include <bits/stdc++.h>
using namespace std;

long x[1000], n, cot[1000], d1[1000], d2[1000];

void inkq()
{
    for (int i = 0; i < n; i++)
    {
        cout << "Quan hau o hang " << i << "va cot " << x[i] << endl;
    }
}

void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1)
        {
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if (i == n)
            {
                inkq();
            }
            else
            {
                Try(i + 1);
            }
        }
        cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cot[i] = d1[i] = d2[i] = 1;
    }
    Try(1);
    return 0;
}