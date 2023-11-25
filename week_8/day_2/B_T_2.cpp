#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int, int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
const ll N = 1e5 + 5, inf = 1e9;
ll tree[N * 3];
void build(ll node, ll l, ll r, ll a[]) {
    if (l == r) {
        tree[node] = a[r];
        return;
    }
    ll leftNode = 2 * node;
    ll rightNode = leftNode + 1;
    ll mid = (l + r) / 2;
    build(leftNode, l, mid, a);
    build(rightNode, mid + 1, r, a);
    tree[node] = min(tree[leftNode], tree[rightNode]);
}

ll query(ll node, ll l, ll r, ll x, ll y) {
    if (x > r || y < l)return inf;
    if (l >= x && r <= y) {
        return tree[node];
    }
    ll leftNode = 2 * node;
    ll rightNode = leftNode + 1;
    ll mid = (l + r) / 2;
    // query(leftNode,l,mid,x,y);
    // query(rightNode,mid+1,r,x,y);
    return min(query(leftNode, l, mid, x, y), query(rightNode, mid + 1, r, x, y));//merge
}
ll test = 1;
void solve() {

    cout << "Case " << test << ":" << nl;
    ll n, q;cin >> n >> q;
    ll a[n + 1];
    for (ll i = 1;i <= n;i++)cin >> a[i];
    build(1, 1, n, a);
    while (q--) {
        ll x, y;cin >> x >> y;
        cout << query(1, 1, n, x, y) << nl;
    }
    test++;
}
int main() {
    FAST;
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}