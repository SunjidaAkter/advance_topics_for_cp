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
    ll n,m,k;cin>>n>>m>>k;
    if(m==0||n==m){
        cout<<0<<nl;
        return;
    }
    if(n==k){
        if(m==1){
            cout<<1<<nl;
            return;
        }else{
            cout<<0<<nl;
            return;
        }
    }
    ll x=n/k;
    if(m<=x){
        cout<<m<<nl;
        return;
    }
    ll y=m-x;
    if(y<=k-1)cout<<x-1<<nl;
    else if(y%(k-1)==0)cout<<x-((y/(k-1)))<<nl;
    else cout<<x-((y/(k-1))+1)<<nl;
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