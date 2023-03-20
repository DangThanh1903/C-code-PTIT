#include <bits/stdc++.h>
using namespace std;

long pheptinh(long a, long b, char c)
{
    switch (c)
    {
    case '+':
        return (a + b);
    case '-':
        return (a - b);
    case '/':
        return (a / b);
    case '*':
        return (a * b);
    }
}

int main()
{
    string str;
    stack<int> st;
    int test, x;
    long kq;
    cin >> test;
    while (test--)
    {
        kq = 0;
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] <= 57 && str[i] >= 48)
                st.push((int)str[i] - 48);
            else
            {
                kq = st.top();
                st.pop();
                kq = pheptinh(kq, st.top(), str[i]);
                st.pop();
                st.push(kq);
            }
        }
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}