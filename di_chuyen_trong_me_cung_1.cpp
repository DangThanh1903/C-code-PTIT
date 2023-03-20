#include <bits/stdc++.h>
using namespace std;

int a[10][10];
int n, c, res;
char v[1000];

void inkq()
{
    for (int i = 0; i < n * 2 - 2; i++)
    {
        cout << v[i];
    }
    cout << " ";
}

void loidi(int i, int j)
{
    for (int z = 0; z < 2; z++)
    {
        if (z == 0)
        {
            v[i + j] = 'D';
            if (i == n - 1 && j == n - 1)
            {
                inkq();
                res++;
                break;
            }
            else
            {
                if (a[i + 1][j] == 1)
                    loidi(i + 1, j);
            }
        }
        else
        {
            v[i + j] = 'R';
            if (i == n - 1 && j == n - 1)
            {
                inkq();
                res++;
                break;
            }
            else
            {
                if (a[i][j + 1] == 1)
                    loidi(i, j + 1);
            }
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
    	res = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        if (a[0][0] != 0) loidi(0, 0);
        if (res == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}
