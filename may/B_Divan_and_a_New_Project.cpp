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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<pii>v;
    for(ll i=0;i<n;i++){
        v.push_back({a[i],i});
    }
    sort(all(v));
    reverse(all(v));
    vector<ll>ans(n+1);
    ll x=n/2,y=1;
    ans[0]=x;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(i%2==0){ans[v[i].second+1]=x+y;}
        else {ans[v[i].second+1]=x-y;y++;}
        sum+=abs(ans[0]-ans[v[i].second+1])*v[i].first;
    }
    cout<<sum*2<<nl;
    for(ll i=0;i<n+1;i++)cout<<ans[i]<<" ";
    cout<<nl;
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