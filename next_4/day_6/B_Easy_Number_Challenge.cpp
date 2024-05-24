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
vector<ll> getdiv(ll n){
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
ll const N=2000000;
ll cnt[N];
void solve(){
    ll x,y,z;cin>>x>>y>>z;
    for(ll i=0;i<=N;i++)cnt[i]=0;
    for (ll i=1;i<=(x*y*z);i++)
        for (ll j=i;j<=(x*y*z);j+=i)
            cnt[j]++;
    ll ans=0;
    for(ll i=1; i<=x; i++){
        for(ll j=1; j<=y; j++){
            for(ll k=1; k<=z; k++){
                ans+=cnt[i*j*k];
                ans%=1073741824; 
            }
        }
    }
    cout<<ans<<nl;
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