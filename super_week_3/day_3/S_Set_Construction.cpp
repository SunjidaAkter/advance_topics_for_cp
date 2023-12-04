#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void dfs(ll s,vector<set<ll>>&ans,vector<vector<ll>>&adj,vector<ll>&vis){
    if(vis[s])return;
    for(ll child:adj[s]){
        dfs(child,ans,adj,vis);
        for(ll children:ans[child])ans[s].insert(children);
    }
    ans[s].insert(s+1);
    vis[s]=1;
    return;
}
void solve(){
    ll n;cin>>n;
    vector<string>v(n);
    vector<vector<ll>>adj(n);
    vector<set<ll>>ans(n);
    vector<ll>vis(n,0);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        for(ll j=0;j<n;j++){
            if(v[i][j]=='1')adj[j].push_back(i);
        }
    }
    for(ll i=0;i<n;i++){
        dfs(i,ans,adj,vis);
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i].size()<<" ";
        for(ll val:ans[i]){
            cout<<val<<" ";
        }
        cout<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}