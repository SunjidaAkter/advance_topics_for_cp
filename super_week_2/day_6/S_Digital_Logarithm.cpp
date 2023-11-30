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
void solve(){
    ll n,ans=0;cin>>n;
    ll a[n],b[n];
    map<ll,ll>fa,fb;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        fa[a[i]]++;
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
        fb[b[i]]++;
    }
    for(auto it:fa){
        ll mn=min(fa[it.first],fb[it.first]);
        fa[it.first]-=mn;
        fb[it.first]-=mn;
    }
    for(auto it:fa){
        if(it.first>9){
            ll num=log10(it.first)+1;
            ans+=fa[it.first];
            fa[num]+=fa[it.first];
            fa[it.first]=0;
        }
    }
    for(auto it:fb){
        if(it.first>9){
            ll num=log10(it.first)+1;
            ans+=fb[it.first];
            fb[num]+=fb[it.first];
            fb[it.first]=0;
        }
    }
    for(auto it:fa){
        ll mn=min(fa[it.first],fb[it.first]);
        fa[it.first]-=mn;
        fb[it.first]-=mn;
    }
    for(auto it:fa)if(it.first!=1)ans+=fa[it.first];
    for(auto it:fb)if(it.first!=1)ans+=fb[it.first];
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}