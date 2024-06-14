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
    ll n,m;cin>>n>>m;
    char a[n][m];
    ll mx=0,mxi,mxj;
    for(int i=0;i<n;i++){
        ll cnt=0;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='#')cnt++;
        }
        if(mx<cnt){
            mx=cnt;
            mxi=i;
        }
    }
    ll s=0;
    for(ll i=0;i<m;i++){
        if(a[mxi][i]=='#')s++;
    }
    for(ll i=0;i<m;i++){
        if(a[mxi][i]=='#'){
            mxj=i;
            break;
        }
    }
    cout<<mxi+1<<" "<<mxj+s/2+1<<nl;
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