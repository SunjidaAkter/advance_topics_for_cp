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
    vector<ll> a;
    vector<ll> c;
    ll ai, ci;
    cin >> ai >> ci;
    while (ai) {
        a.push_back(ai%3);
        //cout << ai%3 << ' ';
        ai /= 3;
    }
    //cout << endl;
    while (ci) {
        c.push_back(ci%3);
        //cout << ci%3 << ' ';
        ci /= 3;
    }
    //cout << endl;
 
    while (a.size() > c.size()) {
        c.push_back(0);
    }
    while (c.size() > a.size()) {
        a.push_back(0);
    }
 
    vector<ll> b;
 
    for (ll i = 0; i < a.size(); i++) {
        for (ll j = 0; j < 3; j++) {
            if ((a[i] + j)%3 == c[i]) {
                b.push_back(j);
                break;
            }
        }
    }
 
    reverse(begin(b), end(b));
 
    ll out = 0;
 
    for (ll i = 0; i < b.size(); i++) {
        out *= 3;
        out += b[i];
    }
    cout << out << endl;
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