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
    for(ll i=0; i<n;i++)cin>>a[i];
    for(ll i=n-1; i>=0;i--){
        if(a[i]>0)a.pop_back();
        else break;
    }
    ll sum=0,i=0;
    while(a[i]<0){
        sum++;i++;
    }
    ll x=0;
    for(ll j=i;j<a.size();j++){
        // cout<<a[j]<<" ";
        x+=a[j];
    }
    // cout<<x<<" "<<i<<nl;
    cout<<abs(sum)+abs(x)<<nl;
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