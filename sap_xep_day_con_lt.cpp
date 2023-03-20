#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x, h, t, count;
    cin >> test;
    vector<long> a, b;
    while (test--)
    {
        h = t = count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (count == 0)
                    h = i + 1;
                else
                    t = i + 1;
                count++;
            }
        }
        cout << h << " " << t << endl;
        a.erase(a.begin(), a.end());
        b.erase(b.begin(), b.end());
    }

    return 0;
}