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
    ll n,x;cin>>n>>x;
    ll ans=0;
    for(ll d=1;d*d<=(n-x);d++){
        if((n-x)%d==0){
            if(d%2==0&&(d+2)/2>=x)ans++;
            if(((n-x)!=d*d)&&((n-x)/d)%2==0&&(((n-x)/d)+2)/2>=x)ans++;
        }
    }
    for(ll d=1;x!=1&&d*d<=(n+x-2);d++){
        if((n+x-2)%d==0){
            if(d%2==0&&(d+2)/2>x)ans++;
            if(((n+x-2)!=d*d)&&((n+x-2)/d)%2==0&&(((n+x-2)/d)+2)/2>x)ans++;
        }
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