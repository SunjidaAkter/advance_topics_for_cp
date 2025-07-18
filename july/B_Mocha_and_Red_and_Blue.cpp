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
    ll x=-1;
    if(n==1&&s[0]=='?'){
        cout<<'B'<<nl;
        return;
    }  
    for(ll i=0;i<n;i++){
        if(s[i]!='?'){
            x=i;break;
        }
    }
    if(x==-1){
        for(ll i=0;i<n;i++){
            if(i%2==0)cout<<'B';
            else cout<<'R';
        }
        cout<<nl;
        return;
    }
    for(ll i=x-1;i>=0;i--){
        if(s[i+1]=='R'&&s[i]=='?')s[i]='B';
        if(s[i+1]=='B'&&s[i]=='?')s[i]='R';
    }
    for(ll i=x;i<n-1;i++){
        if(s[i]=='R'&&s[i+1]=='?')s[i+1]='B';
        if(s[i]=='B'&&s[i+1]=='?')s[i+1]='R';
    }
    cout<<s<<nl;
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