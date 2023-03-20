#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, min, cnt = 1;
    cin >> n;
    vector<long> a;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << cnt << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        cnt++;
    }
    return 0;
}