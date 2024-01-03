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
    vector<string>s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    ll cnt=0;
    string tmp="vika";
    for(ll i=0;i<m;i++){
        for(string str:s){
            if(str[i]==tmp[cnt]){
                cnt++;break;
            }
        }
        if(cnt==4)break;
    }
    if(cnt==4)yes;
    else no;
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