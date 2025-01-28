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
    string s;cin>>s;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<ll>r(n),c(m);
    for(ll i=0;i<n;i++){
        ll sum=0;
        for(ll j=0;j<m;j++){
            sum+=a[i][j];
        }
        r[i]=sum;
    }
    for(ll j=0;j<m;j++){
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i][j];
        }
        c[j]=sum;
    }
    ll x=0,y=0,cnt=0;
    while(cnt<n+m-1){
        if(s[cnt]=='D'){
            a[x][y]=-r[x];
            r[x]+=a[x][y];
            c[y]+=a[x][y];
            x++;
        }else{
            a[x][y]=-c[y];
            r[x]+=a[x][y];
            c[y]+=a[x][y];
            y++;
        }
        cnt++;
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }
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