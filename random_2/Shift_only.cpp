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
    vector<ll>v(n);
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    for(ll i=0;i<n;i++){
        ll sum=0;
        while(v[i]%2==0){
            v[i]/=2;
            sum++;
        }
        a[i]=sum;
    }
    sort(all(a));
    cout<<a[0]<<nl;
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