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
    vector<ll>a(n+1);
    ll sum=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(all(a));
    ll pref[n+1];
    pref[1]=a[1];
    pref[0]=0;
    for(ll i=2;i<=n;i++)pref[i]=pref[i-1]+a[i];
    // for(ll i=1;i<=n;i++)cout<<pref[i]<<" ";
    // cout<<nl;
    ll mx=0;
    for(ll i=0;i<=k;i++){
        mx=max(mx,pref[n-i]-pref[2*(k-i)]);
        // cout<<pref[n-i]-pref[2*(k-i)]<<" mx ";
    }
    cout<<mx<<nl;
 
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