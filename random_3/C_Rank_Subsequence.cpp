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
    vector<pii>lr(n+1);
    vector<pii>uv(n+1);
    for(ll i=1;i<=n;i++){
        cin>>lr[i].first>>lr[i].second>>uv[i].first>>uv[i].second;
    }
    ll mx=0;
    for(ll len=0;len<=n;len++){
        ll taken=0;
        bool ok=false;
        for(ll i=1;i<=n;i++){
            ll leftRank=taken+1,rightRank=len-(taken+1)+1;
            if((leftRank<lr[i].first||leftRank>lr[i].second)&&(rightRank<uv[i].first||rightRank>uv[i].second))taken++;
            if(len==taken){
                ok=true;
                break; 
            }
        }
        if(ok){
            mx=max(mx,len);
        }
    }
    cout<<mx<<nl;
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