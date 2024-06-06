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
ll fun(string x){
    string s="";
    for(ll i=0; i<x.size(); i++){
        if(x[i]!='0')s+=x[i];
    }
    return stoll(s);
}
void solve(){
    string x,y;cin>>x>>y;
    ll a=stoll(x)+stoll(y);
    string s=to_string(a);
    if(fun(x)+fun(y)==fun(s))yes;
    else no;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}