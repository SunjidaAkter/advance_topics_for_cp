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
    for(ll i=0; i<n;i++)cin>>a[i];
    reverse(all(a));
    for(ll i=0; i<n;i++){
        for(ll j=0; j<4;j++){
            if(a[i][j]=='#'){
                v.push_back(j);
            }
        }
    }
    for(ll i=0;i<v.size();i++)cout<<v[i]+1<<" ";
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