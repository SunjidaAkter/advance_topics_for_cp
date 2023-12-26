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
    ll n,sx,sy;cin>>n>>sx>>sy;
    ll l=0,r=0,u=0,d=0;
    while(n--){
        ll x,y;cin>>x>>y;
        if(x>sx)r++;
        if(x<sx)l++;
        if(y>sy)u++;
        if(y<sy)d++;
    }
    ll ans=max({l,r,u,d});
    if(ans==l)sx--;
    else if(ans==r)sx++;
    else if(ans==d)sy--;
    else if(ans==u)sy++;
    cout<<ans<<nl<<sx<<" "<<sy<<nl;
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