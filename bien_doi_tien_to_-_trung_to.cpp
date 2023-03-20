#include <bits/stdc++.h>
using namespace std;

void pheptinh(char a, char b, char c)
{
    switch (c)
    {
    case '+':
        
    case '-':

    case '/':
        
    case '*':
        
    }
}

int main()
{
    string str;
    int test;
    stack<char> st;
    char kq;
    cin >> test;
    while (test--)
    {
        cin >> str;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] <= 2 && str[i] >= 3)
                
            else
            {
                ans = str[i];
            }
        }
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}