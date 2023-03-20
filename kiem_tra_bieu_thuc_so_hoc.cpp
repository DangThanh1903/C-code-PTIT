#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string str;
    int test, count, count2;
    cin >> test;
    while (test--)
    {
        cin >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '(')
                if (count < 1)
                {
                    st.push(str[i]);
                }
                else
                {
                    count2++;
                }
            else
            {
                if (str[i] == ')' && count >= 2)
                {
                    if (count2 == 0)
                    {
                        count = 0;
                        st.pop();
                    }
                    else
                        count2--;
                }
                else
                    count++;
            }
        }
        if (st.empty())
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        while (st.empty() != true)
        {
            st.pop();
        }
    }

    return 0;
}
