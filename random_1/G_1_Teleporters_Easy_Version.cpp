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
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        v[i]=i+1+a[i];
    }
    sort(all(v));
    // for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<nl;
    ll sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (sum + v[i] > k) break;
        sum += v[i];
        cnt++;
    }
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