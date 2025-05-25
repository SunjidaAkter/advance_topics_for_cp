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
const ll N=1e6;
// void solve(){
// }
int main(){
    FAST;
    int t=1;
    cin>>t;
    vector<ll>v(N,0);
    for(ll i=1;i<N;i++)v[i]=v[i-1]^i;
    while(t--){
        ll a,b;cin>>a>>b;
        ll cnt=0;
        if(b==v[a-1])cout<<a<<nl;
        else{
            if(a==(v[a-1]^b))cout<<a+2<<nl;
            else cout<<a+1<<nl;
        }
        // solve();
    }
    return 0;
}