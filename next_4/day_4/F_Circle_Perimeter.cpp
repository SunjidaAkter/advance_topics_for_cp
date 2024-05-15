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
    ll r;cin>>r;
    ll cnt=0;
    for(ll i=0;i<=r;i++){
        ll a=sqrt(pow(r,2)-pow(i,2));
        ll b=sqrt(pow(r+1,2)-pow(i,2));
        if((pow(i,2)+pow(b,2))==pow(r+1,2))b--;
        if((pow(i,2)+pow(a,2))<pow(r,2))a++;
        cnt+=(b-a+1);
    }
    cnt-=2;
    cnt*=4;
    cnt+=4;
    cout<<cnt<<nl;
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