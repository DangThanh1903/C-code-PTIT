#include <bits/stdc++.h>
using namespace std;

long long mod = pow(10, 9) + 7;

long long Pow(long long n, long long k)
{
    if (k == 1)
        return n;
    long long tmp = Pow(n, k / 2);
    if (k & 1)
        return tmp % mod * tmp % mod * n % mod;
    else
        return tmp % mod * tmp % mod;
}

int main()
{
    int test, a;
    int b;
    cin >> test;
    while (test--)
    {
        cin >> a >> b;
        cout << Pow(a, b) << endl;
    }
    return 0;
}