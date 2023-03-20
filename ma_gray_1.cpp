#include <bits/stdc++.h>
using namespace std;

long a[10000], n, i, ok;

void inkq()
{
    for (int z = 0; i < n; i++)
    {
        cout << a[z];
    }
    cout << " ";
}

void sinh2()
{
    if (n % 2 == 1)
    {
        for (int z = n - 2; z > i; z -= 2)
        {
            a[z] = 0;
            inkq();
        }
        for (int z = n - 1; z > i; z -= 2)
        {
            a[z] = 0;
            inkq();
        }
    }
    else
    {
        for (int z = n - 1; z > i; z -= 2)
        {
            a[z] = 0;
            inkq();
        }
        for (int z = n - 2; z > i; z -= 2)
        {
            a[z] = 0;
            inkq();
        }
    }
}

void sinh3()
{
}

void sinh1()
{
    i--;
    a[i] = 1;
    inkq();
    sinh2();
    sinh3();
    if (a[0] == 1)
        ok = 1;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ok = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }
        while (ok == 0)
        {
            i = n - 1;
            inkq();
            sinh1();
        }
    }

    return 0;
}