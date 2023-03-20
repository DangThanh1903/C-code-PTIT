#include <bits/stdc++.h>
using namespace std;

long long pow1(int a, int b)
{
    long long res = 1;
    while (b)
    {
        if (b % 2 == 1)
        {
            res *= a;
        }
        b /= 2;
        a *= a;
    }
    return res;
}

int main()
{
    int test;
    long long n;
    cin >> test;
    while (test--)
    {
        cin >> n;
        cout << pow1(2, n - 1) << endl;
    }
    return 0;
}