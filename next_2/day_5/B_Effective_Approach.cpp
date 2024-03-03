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
    vector<ll> a(n+1);
    vector<ll>v1(n+1);
    vector<ll>v2(n+1);
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++){
        v1[a[i]]=i;
        v2[a[i]]=n-i+1;
    }
    ll q;cin>>q;
    ll s1=0,s2=0;
    while(q--){
        ll x;cin>>x;
        s1+=v1[x];
        s2+=v2[x];
    }
    cout<<s1<<" "<<s2<<nl;
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