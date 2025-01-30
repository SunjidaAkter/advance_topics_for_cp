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
    vector<string>a(n);
    vector<ll>v;
    for(ll i=0;i<n;i++){
        // for(ll j=0;j<n;j++){
        string s;cin>>s;
            a[i]=s;
        // }
    }
    // for(ll i=0;i<n;i++){
    //     for(ll j=0;j<n;j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<nl;
    // }
    // cout<<a[0]<<nl;
    for(ll i=n-1;i>=0;i--){
        // for(ll j=n-1;j>=0;j++){
        // cout<<a[0][i];
            if(a[0][i]=='0'){
                v.push_back(i+1);
            }
        // }
    }
    if(v.size()!=n){
        for(ll i=0;i<n;i++){
            if(a[0][i]=='1'){
                v.push_back(i+1);
            }
        }
    }
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<nl;
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