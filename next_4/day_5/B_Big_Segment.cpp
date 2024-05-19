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
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll mn=*min_element(a,a+n);
    ll mx=*max_element(b,b+n);
    for(ll i=0;i<n;i++){
        if(a[i]<=mn&&mx<=b[i]){
            cout<<i+1<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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