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
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++){
        cin>>b[i];
        mp[b[i]]++;
    }
    ll i=0,j=0,ans=0;
    while(j<m){
        ll cnt=0;
        while(a[i]<=b[j]&&i<n){
            if(a[i]<b[j]){
                i++;
            }else cnt++,i++;
        }
        ans+=(cnt*mp[b[j]]);
        j++;
    }
    cout<<ans;
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