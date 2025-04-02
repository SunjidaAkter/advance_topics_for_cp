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
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    vector<ll>b(n);
    for(auto &x:b)cin>>x;
    ll mn=INT_MAX,cnt=0;
    for(ll i=0;i<n;i++){
        ll x=min(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        ll y=max(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        cnt+=x;
        mn=min(y-x,mn);
    }
    ll remain=k-cnt;
    if(remain<0)No;
    else {
        if(remain>0){
            if(remain%2==0||mn<=remain)Yes;
            else No;
        }else if(remain==0)Yes;
        else No;
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