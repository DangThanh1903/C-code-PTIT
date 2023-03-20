#include <bits/stdc++.h>
using namespace std;

string a;

void sinh()
{
    int i = a.length() - 1;
    while (a[i] == '1')
        i--;
    if (i < 0)
    {
        for (int i = 0; i < a.length(); i++)
        {
            a[i] = '0';
        }
    }
    else
    {
        a[i] = '1';
        for (int j = i + 1; j < a.length(); j++)
        {
            a[j] = '0';
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> a;
        sinh();
        cout << a << endl;
    }
    return 0;
}