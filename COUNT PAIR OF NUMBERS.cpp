#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;cin>>T;
    while(T--){
        long long l,c; cin>>l>>c;
        long long s[l];
        long long e=0,i,j;
        for(i=0;i<l;i++) cin>>s[i];

        sort(s,s+l);

        for(i=l-1;i>0;i--){
            if((lower_bound(s,s+l,c-s[i])-s)<i){
            e+=i-(lower_bound(s,s+l,c-s[i])-s);
            }
            if(s[i]+s[i-1]<c) break;
        }
        cout<<e<<endl;
    }
}
