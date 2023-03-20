#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;
    string str;
    vector<int> a;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            for (int z = 0; z < str.size(); z++)
            {
                x = str[z] - 48;
                a.push_back(x);
            }
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size() - 1;)
        {
            if (a[i] == a[i + 1])
                a.erase(a.begin() + i + 1);
            else
                i++;
        }
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        a.erase(a.begin(), a.end());
    }

    return 0;
}