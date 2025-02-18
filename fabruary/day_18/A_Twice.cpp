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
    ll n;cin >> n;
    ll a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    map<ll,ll>mp;
    for(int i=0;i<n;i++) mp[a[i]]++;
    ll ans=0;
    for(auto x:mp){
        if(x.second/2>0)ans+=(x.second/2);
    }
    cout<<ans<<nl;
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