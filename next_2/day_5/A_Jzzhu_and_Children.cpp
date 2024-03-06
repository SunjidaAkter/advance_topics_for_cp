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
    ll n,m;cin>>n>>m;
    ll a[n];
    queue<ll>q;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        q.push(i);
    }
    ll ans=n;
    while(!q.empty()){
        ll x=q.front();
        ans=x+1;
        if(mp[x]+m>=a[x])q.pop();
        else{
            q.pop();
            mp[x]+=m;
            q.push(x);
        }
    }
    cout<<ans<<nl;
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