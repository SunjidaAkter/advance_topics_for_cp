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
    ll m,idx=-1,chk=0;cin>>m;
    string s1,s2;cin>>s1>>s2;
    vector<vector<ll>>v(10);
    for(int i=0;i<s.size();i++){
        v[s[i]-'0'].push_back(i);
    }
    for(int i=0;i<10;i++){
        v[i].push_back(s.size());
    }
    for(ll i=0;i<m;i++){
        ll l=s1[i]-'0';
        ll r=s2[i]-'0';
        if(chk)break;
        ll newidx=0;
        for(ll j=l;j<=r;j++){
            ll id=upper_bound(v[j].begin(),v[j].end(),idx)-v[j].begin();
            if(v[j][id]==s.size()){
                chk=1;
            }else{
                newidx=max(newidx,v[j][id]);
            }
        }
        idx=newidx;
    }
    if(chk)yes;
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