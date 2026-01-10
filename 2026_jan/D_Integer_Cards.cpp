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
    vector<ll>v(n);
    vector<ll>pref(n+1,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    reverse(all(v));
    for(ll i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    vector<pii>a(m);
    for(ll i=0;i<m;i++){
        ll x,y;cin>>x>>y;
        a[i]={y,x};
    }
    sort(all(a));
    reverse(all(a));
    ll mx=pref[n];
    // cout<<mx<<nl;
    ll cnt=0;
    ll s=0;
    for(ll i=0;i<m;i++){
        cnt+=a[i].second;
        s+=a[i].first*a[i].second;
        ll sum=pref[n-cnt]+s;
        cout<<s<<nl;
        mx=max(mx,sum);
    }    
    cout<<mx<<nl;
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