#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    string s;cin>>s;
    string s1="";
    s1+=s[0]; s1+=s[1];
    string s2="";
    s2+=s[3]; s2+=s[4];
    ll x=stoi(s1);
    ll y=stoi(s2);
    if(x!=0&&x<=11)cout<<s<<" AM"<<nl;
    else if(x==0)cout<<12<<":"<<s[3]<<s[4]<<" AM"<<nl;
    else if(x==12)cout<<12<<":"<<s[3]<<s[4]<<" PM"<<nl;
    else{
        if(x-12<10){
            cout<<"0"<<x-12<<":"<<s[3]<<s[4]<<" PM"<<nl;
        }else cout<<x-12<<":"<<s[3]<<s[4]<<" PM"<<nl;
    }
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}