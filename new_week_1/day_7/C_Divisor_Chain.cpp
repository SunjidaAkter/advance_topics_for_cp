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
    vector<ll>ans;
    ans.push_back(n);
    while(__builtin_popcount(n)>1){//__builtin_popcount(a number)count of setbits in a number's binary representation
        ll x=__builtin_ctz(n);//__builtin_ctz(a numner)count the trailing(last er) zero(off bit) of a number's binary representation
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
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}