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
bool isSquare(int x) {
    int y = (int)(sqrt(x));
    while(y * y < x) y++;
    while(y * y > x) y--;
    return y * y == x;
}
void solve(){
    ll n;cin>>n;
    if(n%2==1){
        no;return;
    }
    n/=2;
    if(isSquare(n)||(n%2==0&&isSquare(n/2)))yes;
    else no;
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