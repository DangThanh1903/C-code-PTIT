#include <bits/stdc++.h>
using namespace std;

int a[1000], n, ok;

void hoanvi()
{
    int i = n - 1;
    int j;
    while (i > 1 && a[i - 1] > a[i])
        i--;
    if (i == 1 && a[0] == n)
    {
        ok = 0;
    }
    else
    {
        int j = n - 1;
        while (a[i - 1] > a[j])
            --j;
        swap(a[i - 1], a[j]);
        reverse(a + i, a + n);
    }
}

int main()
{
    int m;
    ok = 1;
    string x;
    cin >> m;
    n = m - 1;
    vector<string> str;
    string sp;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        str.push_back(x);
    }
    cin >> sp;
    for (int i = 0; i < m; i++)
    {
        if (str[i] == sp)
            str.erase(str.begin() + i);
    }
    sort(str.begin(), str.end());
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    while (ok == 1)
    {
        for (int j = 0; j < n; j++)
        {
            cout << str[a[j] - 1] << " ";
        }
        cout << sp << endl;
        hoanvi();
    }
    return 0;
}