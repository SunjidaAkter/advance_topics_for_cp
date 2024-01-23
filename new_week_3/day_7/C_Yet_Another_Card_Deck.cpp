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
    ll a[n];map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(mp[a[i]]==0)mp[a[i]]=i+1;
    }
    while(q--){
        ll x;cin>>x;
        ll ans=mp[x];
        cout<<mp[x]<<" ";
        mp.erase(x);
        for(auto i:mp){
            if(i.second<ans)mp[i.first]=i.second+1;
        }
        mp[x]=1;
    }
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