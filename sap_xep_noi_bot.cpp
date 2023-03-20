#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[100000], max = 0, res = 0, count = 0, t = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        
        
        cout << "Buoc " << i + 1 << ": ";
        for (int z = 0; z < n; z++)
        {
            cout << a[z] << " ";
        }
        cout << endl;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                t++;
        }
        if (t == n - 1)
            break;
    }
    return 0;
}