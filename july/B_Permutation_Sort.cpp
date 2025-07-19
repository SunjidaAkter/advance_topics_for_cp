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
    bool ok=true;
    vector<int>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=1;i<=n;i++){
        if(v[i-1]!=i)ok=false;
    }
    if(ok){
        cout<<0<<nl;
    }else{
        if(v[0]==1 || v[n-1]==n){
            cout<<1<<nl;
        }else if(v[0]==n || v[n-1]==1){
            cout<<3<<nl;
        }else cout<<2<<nl;    
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