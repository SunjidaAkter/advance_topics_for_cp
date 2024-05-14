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
    ll a[n];bool f=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=k;i<n;i++){
        if(a[i-1]!=a[i]){
            f=1;
            break;
        }
    }
    if(f){
        cout<<-1<<nl;
        return;
    }
    ll cnt=0,x=a[k-1];
    for(ll i=n-1;i>=0;i--){
        if(a[i]==x)cnt++;
        else break;
    }
    cout<<n-cnt<<nl;
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