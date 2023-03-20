#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    for (int i=0; i<test; i++) {
        int c;
        cin >> c;
        int b[c];
        for (int i = 0; i < c; i++) {
            cin >> b[i];
        }
        sort(b, b + c);
        int ans = 0;
        for (int i = 1; i < c; i++) {
            int temp = b[i] - b[i - 1];
            if (temp > 1) {
                ans += temp - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
