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
typedef pair<string,string>pii;
void solve(){
    ll n,ans=0;cin>>n;
    map<pii,ll>mp;
    for(ll i=0; i<n;i++){
        string s1,s2;cin>>s1>>s2;
        if(mp[{s1,s2}]==0){
            // cout<<s<<" "<<ans<<endl; 
            ans++;

        }
        mp[{s1,s2}]++;
    }
    cout<<ans<<nl;
    
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