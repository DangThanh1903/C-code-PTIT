#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, m, count;
    int x[100000], y[100000];
    cin >> test;
    while (test--)
    {
        count = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> y[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (pow(y[j], x[i]) < pow(x[i], y[j]))
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}