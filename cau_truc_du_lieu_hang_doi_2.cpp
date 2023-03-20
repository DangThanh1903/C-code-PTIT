#include <bits/stdc++.h>
using namespace std;

int que(string st)
{
    if (st == "PUSH")
        return 0;
    else
    {
        if (st == "POP")
            return 1;
        else
            return 2;
    }
}

int main()
{
    int n, x;
    cin >> n;
    queue<int> qu;
    string st;
    while (n--)
    {
        cin >> st;
        switch (que(st))
        {
        case 0:
        {
            cin >> x;
            qu.push(x);
            break;
        }
        case 1:
            if (!qu.empty())
                qu.pop();
            break;
        case 2:
        {
            if (qu.empty())
                cout << "NONE" << endl;
            else
                cout << qu.front() << endl;
            break;
        }
        }
    }

    return 0;
}