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
    vector<string>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=0;
    for(ll i=0;i<min(n/2,m/2);i++){
        string str="";
        for(ll j=i+1;j<m-i;j++){
            str+=a[i][j];
        }
        for(ll j=i+1;j<n-i;j++){
            str+=a[j][m-i-1];
        }
        for(ll j=m-i-2;j>=i;j--){
            str+=a[n-i-1][j];
        }
        for(ll j=n-i-2;j>=i;j--){
            str+=a[j][i];
        }
        str+=str.substr(0,3);
        for(ll k=0;k<str.size()-3;k++){
            if(str.substr(k,4)=="1543"){
                ans++;
            }
        }
    }
    cout<<ans<<nl;
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