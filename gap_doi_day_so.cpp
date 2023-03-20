#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, test, k;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        if (k % 2 == 1)
            cout << "1" << endl;
        else
        {
            for (long long i = 4; i <= pow(2, n); i *= 2)
            {
                if (k % i == i / 2)
                {
                    cout << log(i) / log(2) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}