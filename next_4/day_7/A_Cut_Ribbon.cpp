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
    ll n,a,b,c,tmp,cnt=0;cin>>n>>a>>b>>c;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=n;j++){
            if(n-i*a-j*b>=0){
                tmp=n-i*a-j*b;
                if(tmp%c==0){
                    cnt=max(cnt,i+j+(tmp/c));
                }
            }
        }
    } 
    cout<<cnt<<nl;   
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