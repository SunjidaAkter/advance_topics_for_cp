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
    deque<ll>a;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a.push_back(x);
    }
    deque<ll>b;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        b.push_back(x);
    }
    ll ans=0;bool f=1;
    for(ll i=0;i<n;i++){
        if(a[i]>b[i])f=0;
    }
    if(f){
        cout<<0<<nl;
        return;
    }
    for(ll i=1;;i++){
        a.pop_back();
        a.push_front(0);
        f=1;
        for(ll j=0;j<a.size();j++){
            if(a[j]>b[j])f=0;
        }
        if(f){
            cout<<i<<nl;
            break;
        }
    }
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