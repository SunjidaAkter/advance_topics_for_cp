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
    vector<ll>pref(n+1,0);
    for(ll i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }
    ll mn=pref[k],j=1,ans=1;
    for(ll i=k+1;i<=n;i++){
        if(mn>pref[i]-pref[j]){
            mn=pref[i]-pref[j];
            ans=j+1;
        }
        j++;
    }
    cout<<ans<<nl;
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