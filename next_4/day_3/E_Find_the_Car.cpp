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
    ll n,k,q;cin>>n>>k>>q;
    ll a[k+1],b[k+1];
    a[0]=0,b[0]=0;
    for(ll i=1;i<=k;i++)cin>>a[i];
    for(ll i=1;i<=k;i++)cin>>b[i];
    while(q--){
        ll d;cin>>d;
        if(d==0){
            cout<<0<<" ";
            continue;
        }
        if(d==n){
            cout<<b[k]<<" ";
            continue;
        }
        ll ind=upper_bound(a,a+k+1,d)-a;
        ll dist=a[ind]-a[ind-1];
        ll time=b[ind]-b[ind-1];
        ll ans=b[ind-1]+(d-a[ind-1])*time/dist;
        cout<<ans<<" ";
    }
    cout<<nl;
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