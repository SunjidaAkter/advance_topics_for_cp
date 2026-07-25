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
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        v[i]={a[i]-b[i],i};
    }
    sort(all(v));
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(v[i].first<0||i<m)sum+=a[v[i].second];
        else sum+=b[v[i].second];
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