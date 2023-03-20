#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, m, a[100000], b[100000], x, y, h[100000], h1;
    vector<int> k;
    cin >> test;
    while (test--)
    {
        x = y = h1 = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            k.push_back(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            k.push_back(b[i]);
        }
        sort(a, a + n);
        sort(b, b + m);
        while (x < n && y < m)
        {
            if (a[x] == b[y])
            {
                h[h1] = a[x];
                h1++;
                x++;
                y++;
            }
            else
            {
                if (a[x] > b[y])
                {
                    y++;
                }
                else
                    x++;
            }
        }
        sort(k.begin(), k.end());
        for (int i = 0; i < k.size() - 1;)
        {
            if (k[i] == k[i + 1])
                k.erase(k.begin() + i + 1);
            else
                i++;
        }
        for (int i = 0; i < k.size(); i++)
        {
            cout << k[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < h1; i++)
        {
            cout << h[i] << " ";
        }
        cout << endl;
        k.erase(k.begin(), k.end());
    }
    return 0;
}