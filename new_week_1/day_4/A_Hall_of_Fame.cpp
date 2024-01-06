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
    ll l=0,r=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='R')r++;
        if(s[i]=='L')l++;
    }
    if (l==n||r==n)cout<<-1<<nl;
    else if((s[0]=='R'&&s[s.size()-1]=='L'))cout<<0<<nl;
    else if(s[0]=='L'){
        ll ans=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='R'){
                ans=i;
                break;
            }
        }
        cout<<ans<<nl;
    }else cout<<0<<nl;
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