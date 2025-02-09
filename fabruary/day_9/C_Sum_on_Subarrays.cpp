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
    ll n,k;cin>>n>>k;
    if(k==0){
        for(ll i=0;i<n;i++)cout<<-1<<" ";
        cout<<nl;
        return;
    }
    ll ix;
    for(ll i=1;i<=n;i++){
        if(i*(i+1)/2<=k)ix=i;
        else break;
    }
    ll extra=k-(ix*(ix+1)/2);
    for(ll i=1;i<=n;i++){
        if(i==ix+1){
            if(extra==0)cout<<-1<<" ";
            else cout<<-(((ix-extra+1)*2)-1)<<" ";
        }else if(i<=ix){
            cout<<2<<" ";
        }else if(i>ix+1){
            cout<<-1000<<" ";
        }
    }
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