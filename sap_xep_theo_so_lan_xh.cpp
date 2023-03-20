#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;
    vector<int> a;
    int b[100000];
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
            b[i] = 1;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1;)
        {
            if (a[i] == a[i + 1])
            {
                b[i]++;
                a.erase(a.begin() + i + 1);
                n--;
            }
            else
                i++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] < b[j] || a[i] > a[j] && b[i] == b[j])
                {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                }
            }
        }
        for (int i = 0; i < a.size();)
        {
            if (b[i] != 0)
            {
                cout << a[i] << " ";
                b[i]--;
            }
            else
                i++;
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }
    return 0;
}