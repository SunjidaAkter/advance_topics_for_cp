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
    ll a[n];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll mx=0,ans=0;
    for(auto it:mp){
        mx=max(mx,it.second);
    }
    while(mx<n){
        ll rem=n-mx;
        ll can_add=mx;
        ans++;
        ans+=min(can_add,rem);
        mx+=min(can_add,mx);
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