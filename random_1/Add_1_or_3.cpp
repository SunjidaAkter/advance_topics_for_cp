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
    ll n,m;cin>>n>>m;
    if(n==1){
        if(m==1||m==3)yes;
        else no;
        return;
    }
    // cout<<"just check"<<nl;
    if(m<n)no;
    else if(m==n)yes;
    else{
        if(m<3||m>3*n)no;
        else if((n-m)%2==0)yes;
        else no;
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