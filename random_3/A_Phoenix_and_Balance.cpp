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
    ll prod=1,sum1=0,sum2=0;
    vector<ll>v;
    for(ll i=1;i<=n;i++){
        prod*=2;
        v.push_back(prod);
    }
    sum2=v[n-1];
    for(ll i=0;i<n;i++){
    }
    for(ll i=0;i<=((n/2)-2);i++){
        sum2+=v[i];
        // cout<<v[i]<<" ";
    }
    for(ll i=((n/2)-1);i<n-1;i++){
        sum1+=v[i];
    }
    cout<<abs(sum2-sum1)<<nl;
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