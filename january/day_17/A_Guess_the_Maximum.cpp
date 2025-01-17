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
    ll mn=INT_MAX;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=1;i<n;i++){
        ll mx=max(a[i-1],a[i]);
        mn=min(mn,mx);
    }
    cout<<mn-1<<endl;
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