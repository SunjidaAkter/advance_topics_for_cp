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
    ll ans=n-1,aa=1,bb=n-1;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll a=min(i,n-i);
            ll b=max(i,n-i);
            ll clcm=max(a,b);
            if(ans>clcm){
                aa=a,bb=b,ans=clcm;
            }
            ll j=n/i;
            a=min(j,n-j);
            b=max(j,n-j);
            clcm=max(a,b);
            if(ans>clcm){
                aa=a,bb=b,ans=clcm;
            }
        }
    }
    cout<<aa<<" "<<bb<<nl;
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