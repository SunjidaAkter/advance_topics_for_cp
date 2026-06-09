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
    string str;cin>>str; 
    vector<ll>v(26);
    for(ll i=0;i<s.size();i++){
        v[s[i]-'a']=i+1;
    }
    ll sum=0;
    for(ll i=1;i<str.size();i++){
        sum+=abs(v[str[i]-'a']-v[str[i-1]-'a']);
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