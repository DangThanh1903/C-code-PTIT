#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string str;
    int test, count, max;
    cin >> test;
    while (test--)
    {
        count = 0;
        max = 0;
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
                st.push(str[i]);
            else
            {
                if (st.top() == '(')
                {
                    st.pop();
                    count++;
                }
                else
                {
                    count = 0;
                }
                if (max < count)
                    max = count;
            }
        }
        cout << max * 2 << endl;
    }

    return 0;
}