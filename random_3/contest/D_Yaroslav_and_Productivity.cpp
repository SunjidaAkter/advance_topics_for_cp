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
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<ll>pre(n+1,0);
    vector<ll>pre1(n+1,0);
    for(ll i=1;i<=n;i++){
        pre[i]=pre[i-1]+v[i-1];
        pre1[i]=pre1[i-1]+v[i-1];
    }
    // for(ll i=1;i<=n;i++){
    //     cout<<pre[i]<<" ";mx<<
    // }
    // cout<<nl;
    ll mx=pre[n];
    ll tmp1=pre1[n],cnt=0,chck=0;
    while(q--){
        ll x;cin>>x;
        ll tmp=pre[n]-2*pre[x];
        
        chck=cnt+pre[x];
        cnt=-2*chck;
        tmp1=tmp1+cnt;
        // cout<<tmp1<<" "<<tmp<<nl;
        // pre1[x]=-pre1[x];
        mx=max(mx,tmp1);
        mx=max(mx,tmp);
    }
    cout<<mx<<nl;
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