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
    ll ti=0,xi=0,yi=0;
    while(n--){
        ll nti,nxi,nyi;cin>>nti>>nxi>>nyi;
        if(abs(nti-ti)<abs(nxi-xi)+abs(nyi-yi) || abs(nti-ti)%2!=(abs(nxi-xi)+abs(nyi-yi))%2){No;return;}
        else{
            ti=nti;
            xi=nxi;
            yi=nyi;
        }
    }
    Yes;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}