#include <bits/stdc++.h>
using namespace std;

long n, a[10], ok, ok1;
char m;
string x, y;
vector<char> v;

void hoanvi()
{
    int i = n - 1;
    while (i > 1 && x[i - 1] >= x[i])
        i--;
    if (i == 1)
    {
        ok = 0;
    }
    else
    {
        int j = n - 1;
        while (v[i - 1] >= v[j])
            --j;
        swap(v[i - 1], v[j]);
        reverse(v.begin() + i, v.begin() + n);
    }
}

int main()
{
    int test;
    cin >> test;
    for (int p = 0; p < test; p++)
    {
        v.erase(v.begin(), v.end());
        ok = 1;
        ok1 = 1;
        m = 0;
        cin >> y;
        cin >> x;
        n = x.size();
        for (int i = 0; i < n; i++)
        {
            v.push_back(x[i]);
            if (m < x[i])
                m = x[i];
        }
        hoanvi();
        if (ok == 0 && x[a[0]] == m)
        {
            ok1 = 0;
        }
        cout << y << " ";
        if (ok1 == 1)
        {
            for (int i = 0; i < x.size(); i++)
            {
                cout << v[i];
            }
        }
        else
            cout << "BIGGEST";
        cout << endl;
    }

    return 0;
}