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
    ll n;cin>>n;
    vector<pii>a(n);// pair er kotha vulei gesilam..
    vector<pii>b(n);
    vector<pii>c(n);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        b[i].first=x;
        b[i].second=i;
    }
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        c[i].first=x;
        c[i].second=i;
    }
    // sorting r reverse er kotha halka mone ashtesilo
    sort(all(a));
    sort(all(b));
    sort(all(c));
    reverse(all(a));
    reverse(all(b));
    reverse(all(c));
    ll mx=-1;
    for(ll i=0;i<3;i++){//ei line// ekhane 2 o dea jeto may be
        for(ll j=0;j<3;j++){//ei line ei dui line vule gesilam j evabe loop chalano jai 3 porjonto die o 
            for(ll k=0;k<n;k++){
                if((a[i].second != b[j].second) && (b[j].second != c[k].second) && (c[k].second != a[i].second)){ // r ei condition ta die combination ta kora jai eta vule gesilam
                    mx=max((a[i].first+b[j].first+c[k].first),mx);
                }
            }
        }
    }
    cout<<mx<<nl;
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