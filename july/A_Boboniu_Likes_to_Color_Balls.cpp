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
    ll w,x,y,z;cin>>w>>x>>y>>z;
    if(w==0||x==0||y==0){
        if(w==0&&x==0&&y==0){
            Yes;return;
        }else{
            No;return;
        }
    }
    ll odd=0;
    if(w%2==1)odd++;
    if(x%2==1)odd++;
    if(y%2==1)odd++;
    if(z%2==1)odd++;
    if(odd>=3||odd==0)Yes;
    else No;
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