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
    string s;cin>>s;
    map<char,ll>mp;
    for(ll i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    ll odd=0;
    for(auto it:mp){
        if(it.second%2==1)odd++;
    }
    if(odd==1||odd==0){
        cout<<"First";
        return;
    }
    odd--;
    if(odd%2==1)cout<<"Second";
    else cout<<"First";
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