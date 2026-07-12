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
    ll a,b,x;cin>>a>>b>>x;
    ll cnt=0,mn=LLONG_MAX;
    while(a!=b){
        if(b>a)swap(a,b);
        mn=min(mn,abs(a-b)+cnt);
        a/=x;
        cnt++;
    }
    mn=min(mn,abs(a-b)+cnt);
    cout<<mn<<nl;
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