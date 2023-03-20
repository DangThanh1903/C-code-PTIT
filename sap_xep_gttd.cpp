#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    vector<int> v1, v2;
    cin >> test;
    int n, X, y;
    while (test--)
    {
        cin >> n >> X;
        for (int i = 0; i < n; i++)
        {
            cin >> y;
            v1.push_back(y);
        }
        for (int i = 0; i < n; i++)
        {
            v2.push_back(abs(X - v1[i]));
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v2[i] > v2[j])
                {
                    swap(v1[i], v1[j]);
                    swap(v2[i], v2[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        v1.erase(v1.begin(), v1.end());
        v2.erase(v2.begin(), v2.end());
    }

    return 0;
}