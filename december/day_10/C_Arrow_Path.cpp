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
    vector<string>v(2);
    for(ll i=0;i<2;i++)cin>>v[i];
    if(v[1][n-2]=='<'){
        no;
        return;
    }
    ll x=1,y=n-2;
    while(y>0){
        if(v[(x+1)%2][y-1]=='>'){
            x=(x+1)%2;
            y-=1;
        }else if(y>=2&&v[x][y-2]=='>'){
            y-=2;
        }else {
            no;
            return;
        }
    }
    yes;
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