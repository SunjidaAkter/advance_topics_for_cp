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
    ll a,b;cin>>a>>b;
    ll mn=LONG_MAX,cnt=0;
    for(ll i=0;i*i<=a;i++){
        if(b==1&&i==0)continue;
        ll cnt=i;
        ll x=a;
        while(x){
            x/=(b+i);
            cnt++;
        }
        mn=min(mn,cnt);
    }
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