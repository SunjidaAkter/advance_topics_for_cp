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
    ll s1;ll n1;cin>>s1>>n1;
    ll s2;ll n2;cin>>s2>>n2;
    ll mn=min(n1, n2);
    n1 -= mn;
    n2 -= mn;
    if(n1>=7){
        cout<<">"<<nl;
        return;
    }
    if(n2>=7){
        cout<<"<"<<nl;
        return;
    }
    for(ll i=0;i<n1;i++)s1*=10;
    for(ll i=0;i<n2;i++)s2*=10;
    if((s1) > (s2)){
        cout<<">"<<nl;
    }
    else if((s1) < (s2)){
        cout<<"<"<<nl;
    }
    else{
        cout<<"="<<nl;
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