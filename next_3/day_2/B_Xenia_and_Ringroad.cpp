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
    ll n,m;cin >> n >> m;
    vector<ll>a(m);
    for(ll i=0;i<m;i++)cin >> a[i];
    ll tmp = a[0],cnt=0;
    for(ll i=1;i<m;i++){
        if(a[i] >= a[i-1]){
            cnt+=a[i]-a[i-1];
        }else{
            cnt+=a[i]-a[i-1]+n;
        }
    }
    cout<<cnt+(a[0]-1)<<nl;
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