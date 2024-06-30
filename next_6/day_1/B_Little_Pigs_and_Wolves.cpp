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
    ll n,m,cnt=0;cin>>n>>m;
    vector<string>a(n+2);
    for(ll i=0;i<m+2;i++)a[0]+='.';
    for(ll i=0;i<m+2;i++)a[n+1]+='.';
    for(ll i=1;i<n+1;i++){
        a[i]+=".";
        string x;cin>>x;
        a[i]+=x;
        a[i]+=".";
    }
    for(ll i=1;i<n+1;i++){
        for(ll j=1;j<m+1;j++){
            if(a[i][j]=='P'){
                if(a[i-1][j]=='W'||a[i+1][j]=='W'||a[i][j-1]=='W'||a[i][j+1]=='W'){
                    cnt++;a[i][j]='.';
                    if(a[i-1][j]=='W')a[i-1][j]='.';
                    if(a[i+1][j]=='W')a[i+1][j]='.';
                    if(a[i][j-1]=='W')a[i][j-1]='.';
                    if(a[i][j+1]=='W')a[i][j+1]='.';
                }
            }
        }
    }
    cout<<cnt<<nl;
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