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
    vector<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++){
        b[a[i]]=i;
    }
    for(ll i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    cout<<nl;
    return;  // To avoid compilation error with C++11
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