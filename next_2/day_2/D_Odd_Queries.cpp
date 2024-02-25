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
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=a[i];
    vector<ll>pre(n+1);
    pre[0]=0;
    pre[1]=a[0];
    for(ll i=1;i<n;i++)pre[i+1]=pre[i]+a[i];
    while(q--){
        ll s=sum;
        ll l,r,k;cin>>l>>r>>k;
        s=s-(pre[r]-pre[l-1])+((r-l+1)*k);
        if(s%2==1)yes;
        else no;
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