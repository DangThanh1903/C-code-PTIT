#include <bits/stdc++.h>
using namespace std;

int que(string st)
{
    if (st == "PUSHFRONT")
        return 0;
    else
    {
        if (st == "POPFRONT")
            return 1;
        else
        {
            if (st == "PUSHBACK")
                return 3;
            else
            {
                if (st == "POPBACK")
                    return 4;
                else
                {
                    if (st == "PRINTBACK")
                        return 5;
                    else
                        return 2;
                }
            }
        }
    }
}

int main()
{
    int n, x;
    cin >> n;
    deque<int> qu;
    string st;
    while (n--)
    {
        cin >> st;
        switch (que(st))
        {
        case 0:
            cin >> x;
            qu.push_front(x);
            break;
        case 1:
            if (!qu.empty())
                qu.pop_front();
            break;
        case 2:
            if (qu.empty())
                cout << "NONE" << endl;
            else
                cout << qu.front() << endl;
            break;
        case 3:
            cin >> x;
            qu.push_back(x);
            break;
        case 4:
            if (!qu.empty())
                qu.pop_back();
            break;
        case 5:
            if (qu.empty())
                cout << "NONE" << endl;
            else
                cout << qu.back() << endl;
            break;
        }
    }
    return 0;
}
