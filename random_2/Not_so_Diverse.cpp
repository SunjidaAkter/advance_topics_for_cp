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
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[v[i]]++;
    }
    vector<ll>ans;
    for(auto &it:mp){
        ans.push_back(it.second);
    }
    sort(all(ans));
    ll sum=0;
    ll m=ans.size();
    
    for(ll i=0;i<m-k;i++){
        sum+=ans[i];
    }
    cout<<sum<<nl;
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