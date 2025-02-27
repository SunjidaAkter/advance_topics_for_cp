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
    ll n,l,r,x;cin>>n>>l>>r>>x;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    ll ans=0;
    for(ll i=0;i<(1<<n);i++){
        ll k=0,sum=0,mx=0,mn=LONG_MAX;
        for(ll j=i;j>0;j/=2){
            if(j&1){
                mx=max(mx,a[k]);
                mn=min(mn,a[k]);
                sum+=a[k];
            }
            k++;
        }
        if(sum>=l && sum<=r && mx-mn>=x)ans++;
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