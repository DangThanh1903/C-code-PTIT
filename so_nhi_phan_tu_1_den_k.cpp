#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;
    queue<int> a;
    cin >> test;
    while (test--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int v = i + 1;
            for (int z = log2(i + 1); z >= 0; z--)
            {
                if (v > pow(2, z))
                {
                    a.push(1);
                    v -= pow(2, z + 1);
                }
                else
                    a.push(0);
            }
            while (!a.empty())
            {
                cout << a.front();
                a.pop();
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}