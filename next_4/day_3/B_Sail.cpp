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
    ll n,sx,sy,ex,ey;cin>>n>>sx>>sy>>ex>>ey;
    string s;cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='E'){
            if(sx<ex)sx++;
        }else if(s[i]=='W'){
            if(sx>ex)sx--;
        }else if(s[i]=='S'){
            if(sy>ey)sy--;
        }else if(s[i]=='N'){
            if(sy<ey)sy++;
        }
        if(sx==ex&&sy==ey){
            cout<<i+1;
            return;
        }
    }
    cout<<-1;    
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