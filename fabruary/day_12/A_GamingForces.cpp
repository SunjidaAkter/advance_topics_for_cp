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
    ll n, o = 0;
    cin >> n;
    for (ll i = 0;i < n;i++)
    {
        ll in;
        cin >> in;
        o += (in == 1);
    }
    ll ans = 0;
    ans += (o / 2);
    ans += (o % 2);
    ans += (n - o);
 
    cout << ans << '\n';
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