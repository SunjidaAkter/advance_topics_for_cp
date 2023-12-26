#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,k;cin>>n>>k;
    ll a[n],ind[31]={0};
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<31;i++){
        for(ll j=0;j<n;j++){
            if(a[j]&(1<<i)){
                ind[i]++;
            }
        }
    }
    for(ll i=30;i>=0;i--){
        if((n-ind[i])<=k){
            k-=(n-ind[i]);
            for(ll j=0;j<n;j++){
                a[j]|=(1<<i);
            }
        }
    }
    ll ans=a[0];
    for(ll i=1;i<n;i++){
        ans&=a[i];
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}