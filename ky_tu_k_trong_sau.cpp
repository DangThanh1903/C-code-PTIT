#include <bits/stdc++.h>
using namespace std;

char temp = 'A';
string s;
int n;

void Try(int i)
{
    if (i < n)
    {
        temp = 'A' + i;
        s = s + temp + s;
        Try(i + 1);
    }
}

int main()
{
    int test, k;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        Try(0);
        cout << s[k - 1];
    }

    return 0;
}