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
    ll a[n],b[n+1];
    for(ll i=0;i<n;i++)cin>>a[i]; 
    for(ll i=0;i<=n;i++)cin>>b[i];
    ll sum=0;bool ok=0;
    for(ll i=0;i<n;i++){
        if((b[i]<=b[n] && b[n]<=a[i])||(a[i]<=b[n] && b[n]<=b[i])|| b[n]==b[i]|| b[n]==a[i]){
            ok=1;
            break;
        }
    }
    for(ll i=0;i<n;i++){
        sum+=abs(a[i]-b[i]);
    } 
    if(ok==1)sum++;
    else{
        ll mn=INT_MAX;
        for(ll i=0;i<n;i++){
            mn=min(mn,abs(a[i]-b[n]));
            mn=min(mn,abs(b[i]-b[n]));
        }
        sum+=mn+1;
    }
    cout<<sum<<nl;
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