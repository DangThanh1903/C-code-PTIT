#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;
    vector<int> a;
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
        for (int i = 0; i < a.size() - 1;)
        {
            if (a[i] == a[i + 1])
                a.erase(a.begin() + i + 1);
            else
                i++;
        }
        if (a.size() < 2)
            cout << "-1" << endl;
        else
        {
            cout << a[0] << " " << a[1] << endl;
        }
        a.erase(a.begin(), a.end());
    }

    return 0;
}