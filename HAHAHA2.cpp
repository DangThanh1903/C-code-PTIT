#include <bits/stdc++.h>
using namespace std;

// H = 1
// A = 0

long i, a[100], n, ok;

void sinh()
{
    i = n - 2;
    while (i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (a[i] == 1) i--;
    if (i == 0 && a[0] == 1)
    {
        ok = 0;
    }
    else
    {
        if (a[i-1] == 0) a[i] = 1;
        else i--;
    }
    cout << i << " ";
}

main()
{

    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        ok = 1;
        a[0] = 1;
        for (int z = 1; z < n; z++)
        {
            a[z] = 0;
        }
        while (ok == 1)
        {
            for (int v = 0; v < n; v++)
            {
                if (a[v] == 1)
                    cout << "H";
                else
                    cout << "A";
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
