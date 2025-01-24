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
    ll n;cin>>n;
    ll m=0,c=0;
    for(int i=1;i<=n;i++){
        ll x,y;cin>>x>>y;
        if(x>y)m++;
        else if(x<y)c++;
        else m++,c++;
    }
    if(m>c)cout<<"Mishka"<<nl;
    else if(m<c) cout<<"Chris"<<nl;
    else cout<<"Friendship is magic!^^"<<nl;
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