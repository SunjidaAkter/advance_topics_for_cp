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
    ll xx;cin>>xx;
    ll x=xx;
    vector<ll>v;
    while(x){
        v.push_back(x%10);
        x/=10;
    }
    ll n=v.size();
    for(ll i=0;i<n;i++){
        if(v[i]>(9-v[i])){
            v[i]=9-v[i];
        }
    }
    ll idx=-1;
    for(ll i=0;i<n;i++){
        if(v[i]!=0){
            // is_zero=0;
            idx=i;
            break;
        }
    }
    if(idx==n-1){
        cout<<xx;
        return;
    }
    for(ll i=idx;i<n;i++){
        cout<<v[i];
    }
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