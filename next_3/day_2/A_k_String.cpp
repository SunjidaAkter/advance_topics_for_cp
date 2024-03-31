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
    string s;cin>>s;
    map<char,ll>mp;
    for(ll i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    vector<pair<char,ll>>v;
    bool f=1;
    for(auto it:mp){
        if(it.second%n!=0){
            f=0;
            break;
        }else{
            v.push_back({it.first,it.second/n});
        }
    }
    if(f==0){
        cout<<-1<<nl;
        return;
    }
    for(ll j=0;j<n;j++){
        for(auto val:v){
            for(ll i=0;i<val.second;i++){
                cout<<val.first;
            }
        }
    }
    cout<<nl;
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