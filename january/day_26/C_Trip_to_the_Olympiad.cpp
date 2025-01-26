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
    ll l,r,ans=0,a=0,b=0,c=0;cin>>l>>r;
    for(ll i=30;i>=0;i--){
        ll b1=0,b2=0;
        if(l && (1ll<<i)){
            b1=1;
        }
        if(r && (1ll<<i)){
            b1=1;
        }
        if(b1==b2){
            ans+=b1*(1ll<<i);
        }else{
            a=ans+(1ll<<i);
            b=a-1;
            break;
        }
    }
    for(ll i=l;i<=r;i++){
        if(a!=i && b!=i){
            c=i;
            break;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<nl;
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