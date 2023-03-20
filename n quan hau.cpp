#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, cot[100], d1[100], d2[100], x[100];

void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (!cot[j] && !d1[i - j + n] && !d2[i + j - 1])
        {
            x[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
            if (i == n)
            {
                for (int k = 1; k <= n; k++)
                    cout << x[k] << " ";
                cout << endl;
            }
            else
                Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
        }
    }
}

int main()
{
    memset(cot, 0, sizeof(cot));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    cin >> n;
    Try(1);
}