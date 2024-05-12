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
    vector<ll>ans(3);
    vector<vector<ll>>v(n,vector<ll>(3));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    for(ll i=0;i<3;i++){
        ll cnt=0;
        for(ll j=0;j<n;j++){
            cnt+=v[j][i];
        }
        ans[i]=cnt;
    }
    bool f=1;
    for(ll val:ans){
        if(val!=0){
            f=0;
            break;
        }
    }
    if(f)yes;
    else no;
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