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
bool flip(string& s,ll i){
    if(s[i]=='U')s[i]='D';
    else if(s[i]=='D')s[i]='U';
}
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='U'){
            cnt++;
        }
    }
    if(cnt%2==0)no;
    else yes;
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