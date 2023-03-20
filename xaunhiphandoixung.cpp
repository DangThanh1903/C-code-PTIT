#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, test;
    string str, str1, comp;
    cin >> str1 >> test;
    while (test--)
    {
        str = str1;
        cin >> l >> r;
        str.erase(str.begin() + r, str.end());
        str.erase(str.begin(), str.begin() + l - 1);
        comp = str;
        reverse(str.begin(), str.end());
        if (str == comp)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}