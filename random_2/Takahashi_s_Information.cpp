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
    vector<ll>a(3);
    vector<ll>b(3);
    vector<ll>c(3);
    for(ll i=0;i<3;i++)cin>>a[i];
    for(ll i=0;i<3;i++)cin>>b[i];
    for(ll i=0;i<3;i++)cin>>c[i];
    for(ll i=1;i<3;i++){
        if(abs(a[i-1]-b[i-1])!=abs(a[i]-b[i]) || abs(b[i-1]-c[i-1])!=abs(b[i]-c[i])){
            No;
            return;
        }    
    }
    Yes;
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