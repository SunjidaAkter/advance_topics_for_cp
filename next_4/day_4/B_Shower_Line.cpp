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
    ll a[5][5];
    for(ll i = 0; i < 5; i++){
        for(ll j = 0; j < 5; j++){
            cin>>a[i][j];
        }
    }
    ll v[5]={0,1,2,3,4};ll cnt=0,mx=0;
    while(next_permutation(v,v+5)){
        cnt=0;
        cnt+=a[v[0]][v[1]]+a[v[1]][v[0]];
        cnt+=a[v[2]][v[3]]+a[v[3]][v[2]];
        cnt+=a[v[1]][v[2]]+a[v[2]][v[1]];
        cnt+=a[v[3]][v[4]]+a[v[4]][v[3]];
        cnt+=a[v[2]][v[3]]+a[v[3]][v[2]];
        cnt+=a[v[3]][v[4]]+a[v[4]][v[3]];
        mx=max(mx,cnt);
    }
    cnt=0;
    cnt+=a[v[0]][v[1]]+a[v[1]][v[0]];
    cnt+=a[v[2]][v[3]]+a[v[3]][v[2]];
    cnt+=a[v[1]][v[2]]+a[v[2]][v[1]];
    cnt+=a[v[3]][v[4]]+a[v[4]][v[3]];
    cnt+=a[v[2]][v[3]]+a[v[3]][v[2]];
    cnt+=a[v[3]][v[4]]+a[v[4]][v[3]];
    mx=max(mx,cnt);    
    cout<<mx<<nl;
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