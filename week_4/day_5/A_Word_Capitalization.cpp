#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    if(s[0]>=65&&s[0]<=90)cout<<s;
    else {
        char x=s[0]-32;
        // cout<<s[i]+
        cout<<x;
        for(int i=1;i<s.size();i++)cout<<s[i];
    }
    return 0;
}