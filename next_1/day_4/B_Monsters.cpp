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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<pii>v;
    for(ll i=0;i<n;i++){
        v.push_back({a[i]%k,i});
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        if(v[i].first==0)ans.push_back(v[i].second+1);
    }
    sort(all(v));
    reverse(all(v));
    ll i=0;
    while(i<n){
        ll k=v[i].first;
        vector<ll>tmp;
        while(i<n&&v[i].first==k){
            tmp.push_back(v[i].second);
            i++;
        }
        if(k==0)continue;
        sort(all(tmp));
        for(ll val:tmp){
            ans.push_back(val+1);
        }
    }
    for(ll val:ans)cout<<val<<" ";
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