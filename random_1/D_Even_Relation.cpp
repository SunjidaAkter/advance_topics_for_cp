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
const ll N=1e5+7;
vector<pair<ll,ll>>adj[N];
vector<bool>visited(N,false);
vector<bool>ans(N,false);
void dfs(ll node,ll sum){
    if(!visited[node]){
        visited[node]=true;
        if(sum&1)ans[node]=true;
        for(auto child:adj[node]){
            dfs(child.first,sum+child.second);
        }
    }
}
void solve(){
    ll n;cin>>n;
    for(ll i=0;i<n-1;i++){
        ll u,v,w;cin>>u>>v>>w;
        u--,v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dfs(0,0);
    for(ll i=0;i<n;i++){
        if(ans[i])cout<<1<<nl;
        else cout<<0<<nl;
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