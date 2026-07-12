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
    ll n,k;cin>>n>>k;
    vector<vector<ll>>v(k+1);
    for(int i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[x].push_back(y);
    }
    for(int i=1;i<=k;i++){
        if(v[i].size()==0)v[i].push_back(-1);
    }
    for(int i=1;i<=k;i++){
        sort(all(v[i]));
        reverse(all(v[i]));
    }
    for(ll i=1;i<=k;i++)cout<<v[i][0]<<" ";

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