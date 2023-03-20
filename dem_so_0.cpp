#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    long n, count, a[1000];
    while (test--)
    {
        count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                count++;
        }
        cout << count << endl;
    }

    return 0;
}