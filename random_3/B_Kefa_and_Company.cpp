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
    ll n,d;cin>>n>>d;
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[i]={x,y};
    }
    sort(all(v));
    ll sum=v[0].second;
    ll mx=0,j=0;
    for(ll i=1;i<n;i++){
        if(abs(v[j].first-v[i].first)>=d){
            mx=max(mx,sum);
            while(abs(v[j].first-v[i].first)>=d && j<i){
                sum-=v[j].second;
                j++;

            }
            sum+=v[i].second;
            // j++;
            // tmp=v[j].first;
            // cout<<sum<<" chk ";
        }else{
            // cout<<sum<<" chk1 ";
            sum+=v[i].second;
        }
    }
    mx=max(mx,sum);
    cout<<mx<<nl;
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