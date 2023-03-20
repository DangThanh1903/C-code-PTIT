#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;
    long max;
    cin >> test;
    vector<int> a, b;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            b.push_back(0);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1;)
        {
            if (a[i] == a[i + 1])
            {
                b[i]++;
                a.erase(a.begin() + i + 1);
            }
            else
                i++;
        }
        max = b.size() - 1;
        for (int i = 0; i < b.size() - 1; i++)
        {
            if (b[max] < b[i])
                max = i;
        }
        if (b[max] + 1 > n / 2)
            cout << a[max] << endl;
        else
            cout << "NO" << endl;
        a.erase(a.begin(), a.end());
        b.erase(b.begin(), b.end());
    }

    return 0;
}