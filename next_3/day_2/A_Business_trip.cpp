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
    ll n;cin >> n;
    ll a[12];
    for(ll i=0;i<12;i++)cin>>a[i];
    ll ans=0,cnt=0;
    sort(a,a+12);
    reverse(a,a+12);
    for(ll i=0;i<12;i++){
        if(cnt>=n)break;
        cnt+=a[i];
        ans++;
    }
    if(cnt<n)cout<<-1<<nl;
    else cout<<ans<<nl;
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