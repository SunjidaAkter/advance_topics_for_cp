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
    ll idx=0;
    for(ll i=s.size()-1;i>=1;i--){
        if(((ll)(s[i]-'0')+(ll)(s[i-1]-'0'))>9){
           idx=i-1;
           break; 
        }
    }
    // if(idx<s.size()-2)
    cout<<s.substr(0,idx)<<((ll)(s[idx]-'0')+(ll)(s[idx+1]-'0'))<<s.substr(idx+2,s.size())<<nl;
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