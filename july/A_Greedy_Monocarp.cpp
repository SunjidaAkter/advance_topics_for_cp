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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    reverse(all(v));
    ll sum=0,i=0;
    while(sum<=k&&i<n){
        if(sum==k)break;
        if(sum+v[i]>k)break;
        sum+=v[i];
        i++;
    }
    cout<<k-sum<<nl;
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