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
const int N=2e5+2;
vector<ll>v[N];
vector<ll>cnt(N);
vector<bool>vis(N);
ll dfs(ll u){
    vis[u]=true;
    bool flag=true;
    for(auto val:v[u]){
        if(vis[val])continue;
        flag=false;
        cnt[u]=cnt[u]+dfs(val);
    }
    if(flag){
        cnt[u]++;
        return cnt[u];
    }else return cnt[u];
}
void solve(){
    int n;cin>>n;
    int e=n-1;
    for(int i=1;i<=n;i++){
        cnt[i]=0;
        v[i].clear();
        vis[i]=false;
    }
    while(e--){
        ll a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    int q;cin>>q;
    while(q--){
        ll x,y;cin>>x>>y;
        ll ans=cnt[x]*cnt[y];
        c(ans);
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