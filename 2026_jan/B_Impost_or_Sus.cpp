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
    ll cnt=0;
    if(s[0]=='u'){
        cnt++;
        s[0]='s';
    }
    for(ll i=0;i<s.size()-1;i++){
        if(s[i]=='s')continue;
        else if(s[i]=='u' && s[i+1]=='u'){
            cnt++;
            s[i+1]='s';
        }
        
    }
    if(s[s.size()-1]=='u'){
        cnt++;
        s[s.size()-1]='s';
    }
    cout<<cnt<<nl;
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