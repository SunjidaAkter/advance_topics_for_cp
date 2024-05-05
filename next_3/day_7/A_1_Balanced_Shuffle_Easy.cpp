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
    ll x=0;
    vector<pair<pii,char>>v(s.size());
    for(int i=0; i<s.size();i++){
        v[i]={{x,-(i+1)},s[i]};
        if(s[i]=='(')x++;
        else x--;
    }
    sort(all(v));
    for(int i=0; i<s.size();i++){
        cout<<v[i].second;
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