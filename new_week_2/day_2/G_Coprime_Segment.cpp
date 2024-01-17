#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()

const ll maxN = 1e5 + 9;
ll a[maxN], t[maxN * 4];

ll merge(ll l, ll r)
{
    return __gcd(l, r);
}

void build(ll n, ll b, ll e)
{
    if (b == e)
    {
        t[n] = a[b];
        return;
    }
    ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = merge(t[l], t[r]);
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    if (e < i or j < b)
        return 0;
    if (b >= i and e <= j)
        return t[n];
    ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1;i <= n;i++)
        cin >> a[i];
    build(1, 1, n);
    ll i = 1, j = 1, ans = LLONG_MAX, g = 0;
    while (j <= n)
    {
        g = __gcd(g, a[j]);
        if (g == 1)
        {
            ans = min(ans, j - i + 1);
            i++;
            while (i <= j)
            {
                ll curr = query(1, 1, n, i, j);
                if (curr != 1)
                {
                    g = curr;
                    break;
                }
                ans = min(ans, j - i + 1);
                i++;
            }
            j++;
        }
        else
            j++;
    }
    if (ans == LLONG_MAX)
        ans = -1;
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    // cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case " << cs << ": ";
        solve();
    }
    return 0;
}
