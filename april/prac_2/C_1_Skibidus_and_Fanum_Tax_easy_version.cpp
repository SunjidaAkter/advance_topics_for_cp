#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll INF = 1e18;

void solve() {
    int n, m;
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
    
    if (n == 0) {
        cout << "YES\n";
        return;
    }
    
    ll prev_not = a[0];
    ll prev_flip = B - a[0];
    
    for (int i = 1; i < n; i++) {
        ll current = a[i];
        ll x = current;
        ll y = B - current;
        
        ll new_not = -INF;
        ll new_flip = -INF;
        
        // Check transitions from previous not flipped
        if (prev_not != -INF) {
            if (x >= prev_not) {
                new_not = max(new_not, x);
            }
            if (y >= prev_not) {
                new_flip = max(new_flip, y);
            }
        }
        // Check transitions from previous flipped
        if (prev_flip != -INF) {
            if (x >= prev_flip) {
                new_not = max(new_not, x);
            }
            if (y >= prev_flip) {
                new_flip = max(new_flip, y);
            }
        }
        
        prev_not = new_not;
        prev_flip = new_flip;
        
        if (prev_not == -INF && prev_flip == -INF) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << ( (prev_not != -INF || prev_flip != -INF) ? "YES" : "NO" ) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}