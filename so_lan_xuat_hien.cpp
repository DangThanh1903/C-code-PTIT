#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, k, count;
    cin >> test;
    int a[1000];
    while (test--)
    {
        count = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
                count++;
        }
        if (count != 0)
            cout << count << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}