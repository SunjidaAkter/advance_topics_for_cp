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
ll b1,b2=0;
string a[2];
const ll N=2e5+1;
bool vis[2][N];
void dfs(ll r,ll c,ll m){
    if(vis[r][c])return;
    if(c>=m)return;
    (b2)++;
    vis[r][c]=1;
    if(r==0){
        if(a[1][c]=='B'&&!vis[1][c]){
            dfs(1,c,m);
        }else{
            if(a[0][c+1]=='B') dfs(0,c+1,m);
        }
    }else{
        if(a[0][c]=='B'&&!vis[0][c]){
            dfs(0,c,m);
        }else{
            if(a[1][c+1]=='B') dfs(1,c+1,m);
        }
    }
}
void refresh(int m){
    for(ll i=0;i<m;i++)vis[0][i]=vis[1][i]=0;
}
void solve(){
    b1=0;
    ll m;cin>>m;
    for(ll i=0;i<2;i++){
        cin>>a[i];
    }
    bool ans=0;
    for(ll i=0;i<2;i++){
        for(ll j=0;j<m;j++){
            if(a[i][j]=='B')b1++;
        }
    }
    refresh(m);
    for(ll i=0;i<m;i++){
        if(a[0][i]=='B'&&a[1][i]=='B'){
            b2=0;
            dfs(0,i,m);
            if(b1==b2)ans=1;
            refresh(m);
            b2=0;
            dfs(1,i,m);
            if(b1==b2)ans=1;
            break;
        }else if(a[0][i]=='B'){
            b2=0;
            dfs(0,i,m);
            if(b1==b2)ans=1;
            break;
        }else if(a[1][i]=='B'){
            b2=0;
            dfs(1,i,m);
            if(b1==b2)ans=1;
            break;
        }
    }
    if(ans)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
