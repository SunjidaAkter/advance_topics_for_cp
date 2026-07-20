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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)mp[v[i]]++;
    ll q;cin>>q;
    vector<ll>a(q);
    vector<ll>b(q);
    for(ll i=0;i<q;i++){
        ll x;cin>>x;
        a[i]=mp[x];
    }
    for(ll i=0;i<q;i++){
        ll x;cin>>x;
        b[i]=mp[x];
    }
    ll mx=*max_element(all(a));
    vector<pii>ans;
    for(ll i=0;i<q;i++){
        if(a[i]==mx)ans.push_back({b[i],i+1});
    }
    sort(ans.begin(), ans.end(), greater<pii>());
    cout<<ans[0].second<<nl;
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