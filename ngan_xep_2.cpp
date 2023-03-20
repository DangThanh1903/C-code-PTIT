#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, test, z;
    string cmt;
    vector<int> v;
    cin >> test;
    while (test)
    {
        cin >> cmt;
        if (cmt == "PUSH")
        {
            cin >> x;
            v.push_back(x);
        }
        else
        {
            if (cmt == "POP")
                v.pop_back();
            else
            {
                if (v.size() != 0)
                    cout << v[v.size() - 1] << endl;
                else
                    cout << "NONE" << endl;
            }
        }
        test--;
    }

    return 0;
}