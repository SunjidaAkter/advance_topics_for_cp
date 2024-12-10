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
    ll a[n],b[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    
    
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[abs(b[i])]+=a[i];
    }
    vector<pii>v;
    for(auto val:mp){
        v.push_back({val.first,val.second});
    }
    // for(auto val:v)cout<<val.second<<" ";
    // cout<<nl;
    
    ll idx=0;
    for(ll i=0;i<n;i++){
        if(idx==v.size()){
            yes;return;
        }
        if(v[idx].first<=i){
            // cout<<"idx ";
            no;return;
        }
        ll cur=k;
        while(idx<v.size()&&cur>0){
            if(v[idx].second>cur){
                v[idx].second-=cur;
                break;
            }else{
                cur-=v[idx].second;
                v[idx].second=0;
                idx++;
            }
        }
    }
    // cout<<idx<<"\n";
    if(v.back().second>0){
        // cout<<v.back().second;
        no;return;
    }
    yes;
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