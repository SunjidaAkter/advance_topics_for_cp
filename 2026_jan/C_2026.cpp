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
vector<ll>v;
void test(ll n) {
    for(ll i=1;i<=n;i++){
        ll a = 1, b = sqrt(i);
        while (a <= b) {
            ll s = a*a + b*b;
            if (s == i && a!=b) {v.push_back(i);break;}
            else if (s < i) a++;
            else b--;
        }
    }

}
void solve(){
    ll n;cin>>n;
    test(n);
    if(v.size()==0){
        cout<<0<<nl;
    }
    else {
        cout<<v.size()<<nl;
        for(auto x:v)cout<<x<<" ";
        cout<<nl;
    }
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