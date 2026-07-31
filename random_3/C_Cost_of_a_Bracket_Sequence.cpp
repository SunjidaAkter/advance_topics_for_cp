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
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    vector<ll>pre_open(n+2,0);
    vector<ll>suf_close(n+2,0);
    for(ll i=0;i<n;i++){
        pre_open[i+1]=pre_open[i]+(s[i]=='('?1:0);
    }
    string ans="";
    for(ll i=0;i<n;i++)ans+='0';
    while(k--){
        ll i=0,j=n-1;
        while(i<j){
            if(((pre_open[i]+suf_close[i+1])<(pre_open[j]+suf_close[j+1]))&&(ans[i]!='1')){ans[i]='1';break;}
            else if(((pre_open[i]+suf_close[i+1])>=(pre_open[j]+suf_close[j+1]))&&(ans[j]!='1')) {ans[j]='1';break;}
            i++,j--;
        }
    }
    cout<<ans<<nl;
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