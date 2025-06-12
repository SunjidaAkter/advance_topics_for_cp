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
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    // |xi−xj|+|yi−yj|<=k
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<n;j++){
            if(i==j)continue;
            if((abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second))<=k){
                sum++;
            }
        }
        if(sum==n-1){
            cout<<1<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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