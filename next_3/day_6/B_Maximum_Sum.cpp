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
const ll mod=1e9+7;

void solve(){
    ll n,k;cin>>n>>k;
    ll a[n],sum=0,ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum=(sum+a[i]+mod)%mod;
    }
    ll mn=LLONG_MIN,cnt=0;
    for(ll i=0;i<n;i++){
        cnt+=a[i];
        mn=max(mn,cnt);
        if(cnt<0)cnt=0;
    }
    mn=max(mn,cnt);
    while(k--){
        ans=(ans+mn)%mod;
        mn=(2*mn)%mod;
    }
    cout<<(mod+ans+sum)%mod<<nl;
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