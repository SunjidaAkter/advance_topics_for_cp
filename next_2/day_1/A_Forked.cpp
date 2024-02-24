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
    ll a,b,xk,yk,xq,yq,ans=0;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    vector<ll>dx={-a,-a,a,a,-b,-b,b,b};
    vector<ll>dy={-b,b,-b,b,-a,a,-a,a};
    set<pii>k,q;
    for(ll i=0;i<8;i++)k.insert({xk+dx[i],yk+dy[i]});
    for(ll i=0;i<8;i++)q.insert({xq+dx[i],yq+dy[i]});
    for(auto val:k){
        if(q.find(val)!=q.end())ans++;
    }
    cout<<ans<<nl;
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