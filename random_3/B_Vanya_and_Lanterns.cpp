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
    double l;cin>>l;
    vector<double>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    double mx=max(2*(l-v[n-1]),2*(v[0]-0));
    for(ll i=1;i<n;i++){
        mx=max(mx,v[i]-v[i-1]);
    }
    double ans=mx/2.0;
    cout << fixed << setprecision(10) << ans << nl;
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