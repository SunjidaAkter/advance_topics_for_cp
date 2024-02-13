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
    ll n,k,x=1,st=1;cin>>n>>k;
    ll ans[n];
    for(ll i=0;i<k;i++){
        ll cnt=i;
        while(cnt<n){
            ans[cnt]=st;
            st++;
            cnt+=k;
        }
        if(x==0){
            cnt=i;
            ll en=st-1;
            while(cnt<n){
                ans[cnt]=en;
                en--;
                cnt+=k;
            }
        }
        x^=1;
    }
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