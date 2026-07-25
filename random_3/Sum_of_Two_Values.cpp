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
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v[i]={x,i+1}; 
    }
    sort(all(v));
    ll i=0,j=n-1;
    while(i<j){
        if((v[i].first+v[j].first)==m){
            cout<<v[i].second<<" "<<v[j].second<<nl;
            return;
        }else if((v[i].first+v[j].first)<m)i++;
        else j--;
    }
    cout<<"IMPOSSIBLE"<<nl;
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