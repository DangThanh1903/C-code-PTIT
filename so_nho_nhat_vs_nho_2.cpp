#include <bits/stdc++.h>
using namespace std;

vector<long> a;

int main()
{
    long test, n, x;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size();)
        {
            if (a[i] == a[i + 1])
                a.erase(a.begin() + i);
            else
                i++;
        }
        if (a.size() != 0)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            cout << "-1";
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }

    return 0;
}