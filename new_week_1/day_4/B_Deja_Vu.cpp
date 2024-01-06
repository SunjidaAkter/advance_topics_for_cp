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
    ll a[n],x[q];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<q;i++)cin>>x[i];
    set<ll>st;
    for(ll i=0;i<q;i++){
        if(st.count(x[i]))continue;
        st.insert(x[i]);
        for(ll j=0;j<n;j++){
            if(a[j]%(1<<x[i])==0)a[j]+=(1<<(x[i]-1));
        }
    }
    for(ll val:a)cout<<val<<" ";
    cout<<nl;
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