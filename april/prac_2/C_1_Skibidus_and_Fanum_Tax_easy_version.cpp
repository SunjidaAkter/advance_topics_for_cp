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
const ll INF=1e18;
void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    ll B = b[0];
    ll prev = a[0];
    ll prev_flip = B - a[0];
    for (ll i = 1; i < n; i++) {
        ll cur = a[i];
        ll x = cur;
        ll y = B - cur;      
        ll nn = -INF;
        ll nflip = -INF;
        if (prev != -INF) {
            if (x >= prev) {
                nn = max(nn, x);
            }
            if (y >= prev) {
                nflip = max(nflip, y);
            }
        }
        if (prev_flip != -INF) {
            if (x >= prev_flip) {
                nn = max(nn, x);
            }
            if (y >= prev_flip) {
                nflip = max(nflip, y);
            }
        }
        prev = nn;
        prev_flip = nflip;
        
        if (prev == -INF && prev_flip == -INF) {
            no;
            return;
        }
    }
    cout << ( (prev != -INF || prev_flip != -INF) ? "YES" : "NO" ) << "\n";
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