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
    for(ll i=0;i<2;i++){
        cin>>v[i];
    }
    ll sum=0;
    for(ll i=1;i<n-1;i++){
        if((v[0][i]=='.'&&v[0][i+1]=='.'&&v[0][i-1]=='.'&&v[1][i]=='.'&&v[1][i-1]=='x'&&v[1][i+1]=='x')||(v[1][i]=='.'&&v[1][i+1]=='.'&&v[1][i-1]=='.'&&v[0][i]=='.'&&v[0][i-1]=='x'&&v[0][i+1]=='x'))sum++;
    }
    cout<<sum<<nl;
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