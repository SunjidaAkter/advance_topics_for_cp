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
    ll mx=0,cnt=0;
    bool f=1;
    if(s[0]!='1')f=0;
    for(ll i=1;i<s.size();i++){
        if((s[i]=='4'&&(s[i-1]!='1'&&s[i-1]!='4'))){
            f=0;
            break;
        }
        if(s[i]!='1'&&s[i]!='4'){
            f=0;
            break;
        }
    }
    for(ll i=0;i<s.size();i++){
        if(s[i]=='4'){
            cnt++;
        }else{
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    mx=max(mx,cnt);
    if(f){
        if(mx>2)no;
        else yes;
    }else no;
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