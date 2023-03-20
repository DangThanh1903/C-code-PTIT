#include <bits/stdc++.h>
using namespace std;

bool snt(int a)
{
    if (a == 3)
        return true;
    for (int i = 3; i <= sqrt(a); i += 2)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int test, n, res;
    cin >> test;
    while (test--)
    {
        res = 0;
        cin >> n;
        if (n % 2 == 0 && n >= 6)
        {
            for (int i = 3; i <= n / 2; i += 2)
            {
                if (snt(n - i) && snt(i))
                {
                    cout << i << " " << n - i << endl;
                    res = 1;
                    break;
                }
            }
        }
        else
        {
            if (snt(n - 2) && n >= 4)
            {
                cout << "2 " << n - 2 << endl;
                res = 1;
            }
        }
        if (res == 0)
            cout << "-1" << endl;
    }

    return 0;
}