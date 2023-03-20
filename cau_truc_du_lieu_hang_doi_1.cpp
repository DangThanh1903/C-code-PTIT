#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, ca, x;
    queue<int> qu;
    cin >> test;
    while (test--)
    {
        cin >> n;
        while (n--)
        {
            cin >> ca;
            switch (ca)
            {
            case 1:
                cout << qu.size() << endl;
                break;
            case 2:
            {
                if (qu.empty())
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                break;
            }
            case 3:
            {
                cin >> x;
                qu.push(x);
                break;
            }
            case 4:
                if (!qu.empty())
                    qu.pop();
                break;
            case 5:
            {
                if (qu.empty())
                    cout << "-1" << endl;
                else
                    cout << qu.front() << endl;
                break;
            }
            case 6:
            {
                if (qu.empty())
                    cout << "-1" << endl;
                else
                    cout << qu.back() << endl;
                break;
            }
            }
        }
        while (!qu.empty())
        {
            qu.pop();
        }
    }
    return 0;
}