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
    ll n,x,y,z;cin>>n>>x>>y>>z;
    ll ans1 = (n/(x+y)) + (n%(x+y) == 0 ? 0 : 1);
    ll ans2 = (x+y)*z; 
    if(ans2 >= n ){
        ans2 = (n/(x+y)) + (n%(x+y) == 0 ? 0 : 1);
    }else{
        ll rem = n - x*z;
        ans2 = (rem/(x+10*y)) + ((rem%(x+10*y)) == 0 ? 0 : 1) +z ;
    }
    cout<<min(ans1,ans2)<<nl;
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