#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    string str;
    while (test--) {
        cin >> str;
        if (str[0] == str[str.length() - 1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}