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
    ll one=0,two=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x==1)one++;
        else two++;
    }
    if(one%2==0&&two%2==0){
        yes;
    }
    else {
        if(two%2==1&&one>0&&one%2==0)yes;
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