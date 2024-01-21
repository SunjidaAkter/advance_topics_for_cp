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
    vector<ll>v[n],ans[n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll x;cin>>x;
            v[i].push_back(x);
        }    
    }
    for(ll i=0;i<n;i++){
        sort(all(v[i]));    
    }
    for(ll i=0;i<m;i++){
        ll mn=LONG_MAX,idx=-1;
        for(ll j=0;j<n;j++){
            if(v[j][0]<mn){
                mn=v[j][0];
                idx=j;
            }
        }
        for(ll j=0;j<n;j++){
            if(j==idx){
                ans[j].push_back(v[j][0]);
                v[j].erase(v[j].begin());
            }else{
                ans[j].push_back(v[j][v[j].size()-1]);
                v[j].pop_back();
            }
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<nl;
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