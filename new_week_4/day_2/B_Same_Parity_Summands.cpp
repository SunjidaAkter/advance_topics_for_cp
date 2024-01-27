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
    if(n<k){
        no;return;
    }
    if(n==k){
        yes;
        for(ll i=1;i<=n;i++)cout<<1<<" ";
        cout<<nl;return;
    }
    if(k%2==0){
        if(n%2==0){
            yes;
            for(ll i=1;i<k;i++)cout<<1<<" ";
            cout<<n-(k-1)<<nl;
        }else no;
    }else{
        if(n%2==0){
            if(n<2*k){
                no;
            }else{
                yes;
                for(ll i=1;i<k;i++)cout<<2<<" ";
                cout<<n-(2*(k-1))<<nl;
            }
        }else{
            yes;
            for(ll i=1;i<k;i++)cout<<1<<" ";
            cout<<n-(k-1)<<nl;
        }
    }
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