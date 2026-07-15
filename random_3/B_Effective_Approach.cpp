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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<ll>a(n+1);
    for(ll i=1;i<=n;i++){
        a[v[i-1]]=i;
    }
    ll q;cin>>q;
    ll cnt1=0,cnt2=0;
    while(q--){
        ll x;cin>>x;
        cnt1+=a[x]; 
        cnt2+=(n-a[x]+1); 
    }
    cout<<cnt1<<" "<<cnt2<<nl;
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