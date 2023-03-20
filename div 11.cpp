#include<bits/stdc++.h>
using namespace std;
 

int test(string str)
{
    int a = str.length();
 
    int u = 0, e = 0;
    for (int i=0; i<a; i++)
    {

        if (i%2 == 0)
            u += (str[i]-'0');
        else
            e += (str[i]-'0');
    }
 
    return ((u - e) % 11 == 0);
}
 
int main(){
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
    string s;
    cin >> s;
    if(test(s)) cout << "1" << endl;
    else cout << "0" << endl;
  }
  return 0;
}
