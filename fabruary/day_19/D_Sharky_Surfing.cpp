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
     int n, m, L;
    cin >> n >> m >> L;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; i++) {
      cin >> l[i] >> r[i];
    }
    vector<int> x(m), v(m);
    for (int i = 0; i < m; i++) {
      cin >> x[i] >> v[i];
    }
    multiset<int> s;
    int ptr = 0;
    int k = 1;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      while (ptr < m && x[ptr] < l[i]) {
        s.insert(v[ptr++]);
      }
      while (k <= r[i] - l[i] + 1) {
        if (s.empty()) {
          ans = -1;
          break;
        }
        k += *prev(s.end());
        s.erase(prev(s.end()));
        ans += 1;
      }
      if (ans == -1) {
        break;
      }
    }
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