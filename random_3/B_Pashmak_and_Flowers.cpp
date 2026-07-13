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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    sort(all(a));
    for(ll i=0;i<n;i++)mp[a[i]]++;
    if(a[0]==a[n-1]){
        cout<<0<<" "<<mp[a[0]]*(mp[a[0]]-1)/2<<nl;
        return;
    }
    cout<<a[n-1]-a[0]<<" "<<mp[a[0]]*mp[a[n-1]]<<nl;
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