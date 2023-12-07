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
    ll n;cin>>n;
    vector<ll>ans;
    ans.push_back(n);
    while(__builtin_popcount(n)>1){
        ll x=__builtin_ctz(n);
        n-=(1<<x);
        ans.push_back(n);
    }
    while(n>1){
        n/=2;
        ans.push_back(n);
    }
    cout<<ans.size()<<nl;
    for(ll val:ans)cout<<val<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}