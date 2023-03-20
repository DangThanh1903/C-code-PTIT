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
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }

    return 0;
}