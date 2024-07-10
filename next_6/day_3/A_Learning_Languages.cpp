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
const ll mx=101;
vector<ll>parent(mx+1);
ll freq[mx]={0};
ll rnk[mx]={0};
ll dsu_find(ll x){
    if(parent[x]!=x) parent[x]=dsu_find(parent[x]);
    return parent[x];
}
void dsu_union(ll x,ll y){
    ll leaderX=dsu_find(x);
    ll leaderY=dsu_find(y);
    if(leaderX==leaderY)return;
    if(rnk[leaderX]<rnk[leaderY]){
        parent[leaderX]=leaderY;
    }else{
        parent[leaderY]=leaderX;
        if(rnk[leaderX]==rnk[leaderY]) rnk[leaderY]++;
    }
} 
void solve(){
    ll non=0,n,m,cnt=0,ans=0;cin>>n>>m;
    for(ll i=0;i<=mx;i++)parent[i]=i;
    ll k,u,v;
    for(ll i=0;i<n;i++){
        cin>>k;
        if(k==0)non++;
        else{
            cin>>u;freq[u]++;
            for(ll j=1;j<k;j++){
                cin>>v;freq[v]++;
                dsu_union(u,v);
            }
        }
    }
    for(ll i=1;i<=m;i++){
        if(freq[i]==0)cnt++;
        else if(parent[i]==i)ans++;
    }
    ans--;
    if(cnt==m)cout<<n<<nl;
    else cout<<ans+non<<nl;
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