#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, ok = 1;
    string cmt;
    vector<int> v;
    while (ok)
    {
        cin >> cmt;
        if (cmt == "push")
        {
            cin >> x;
            v.push_back(x);
        }
        else
        {
            if (cmt == "pop")
                v.pop_back();
            else if (v.size() == 0)
                cout << "empty";
            else
            {
                for (int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
        if (v.size() == 0 && cmt == "show")
            break;
    }

    return 0;
}