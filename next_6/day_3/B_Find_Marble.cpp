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
    ll cnt=0,n,s,tt;cin>>n>>s>>tt;
    ll p[100000+1];
    for(ll i=1;i<=n;i++){
        ll x;cin>>x;
        p[i]=x;
    }
    while(s!=tt&&p[s]!=0){
        ll tmp=p[s];
        p[s]=0;
        s=tmp;
        cnt++;
    }
    if(s==tt)cout<<cnt<<nl;
    else cout<<-1<<nl;
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