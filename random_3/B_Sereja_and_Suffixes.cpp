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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)mp[a[i]]++;
    ll sum=0;
    for(auto &x:mp)sum++;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        // cout<<a[i]<<" ***** "<<mp[a[i]]<<nl;
        if(mp[a[i]]>1){
            v.push_back(sum);
            mp[a[i]]--;
        }else{
            v.push_back(sum);
            sum--;
            // cout<<a[i]<<" ***** "<<mp[a[i]]<<nl;
        }
    }
    while(q--){
        ll x;cin>>x;
        x--;
        cout<<v[x]<<nl;
    }
    //**more clean and suffix pattern */
    // ll n,q;cin>>n>>q;
    // vector<ll>a(n);
    // for(ll i=0;i<n;i++)cin>>a[i];
    // map<ll,ll>mp;
    // vector<ll>v(n);
    // ll cnt=0;
    // for(ll i=n-1;i>=0;i--){
    //     if(mp[a[i]]==0){
    //         cnt++;
    //         mp[a[i]]++;
    //         v[i]=cnt;
    //     }else{
    //         v[i]=cnt;
    //     }
    // }
    // while(q--){
    //     ll x;cin>>x;
    //     x--;
    //     cout<<v[x]<<nl;
    // }
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