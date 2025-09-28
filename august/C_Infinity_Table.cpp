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
    ll mx=1000001;
    ll p;
    for(ll i=1;i<=mx;i++){
        if(i*i>=n){
            p=i;
            break;
        }
    }
    n-=(p-1)*(p-1);
    if(n<=p)cout<<n<<" "<<p<<nl;
    else {
        n-=p;
        cout<<p<<" "<<p-n<<nl;
    }
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