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
ll dist(ll a,ll b,ll c){
    if(a>=b && a>=c) return min(a-b,a-c);
    if(b>=a && c>=a) return min(b-a,c-a);
    return 0;
}
void solve(){
    ll ax,ay;cin>>ax>>ay;
    ll bx,by;cin>>bx>>by;
    ll cx,cy;cin>>cx>>cy;
    cout<<dist(ax,bx,cx)+dist(ay,by,cy)+1<<nl;
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