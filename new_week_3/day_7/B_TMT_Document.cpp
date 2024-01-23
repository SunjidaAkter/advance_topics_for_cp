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
    ll n;cin>>n;
    string s;cin>>s;
    ll t=0,m=0;
    bool f=1;
    for(ll i=0;i<n;i++){
        if(s[i]=='T')t++;
        if(s[i]=='M')m++;
        if(t<m){
            no;
            return;
        }
    }
    t=0,m=0;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='T')t++;
        if(s[i]=='M')m++;
        if(t<m){
            no;
            return;
        }
    }
    if(t!=(2*m)){
        no;return;
    }
    yes;
}
int main(){
    FAST;
    int test=1;
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}