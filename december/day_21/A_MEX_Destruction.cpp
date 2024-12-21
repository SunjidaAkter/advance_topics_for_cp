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
    vector<ll>a(n);
    for(ll i=0; i<n;i++)cin>>a[i];
    ll s=0;
    for(ll i=0; i<n;i++)if(a[i]==0)s++;
    if(s==n){
        cout<<0<<nl;
        return;
    }
    if(n==1){cout<<1<<nl;return;}
    for(ll i=n-1; i>=0;i--){
        if(a[i]==0)a.pop_back();
        else break;
    }
    ll x=0;
    s=0;
    for(ll i=0; i<n;i++){
        if(a[i]==0)x++;
        else break;
    }
    for(ll i=x;i<a.size();i++){
        if(a[i]==0){cout<<2<<nl;return;}
    }
    cout<<1<<nl;
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