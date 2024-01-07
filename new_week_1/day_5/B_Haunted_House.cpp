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
    reverse(all(s));
    vector<ll> dp(n+1,0);
    ll j=1;
    for(ll i=1;i<=n;i++){
        if(s[i-1]=='1'){
            s[i-1]='0';
            while((j<n&&s[j]=='1')||(j<n&&j<i))j++;
            if(j==n)dp[i]=-1;
            else{
                s[j]='1';
                dp[i]=j-(i-1)+dp[i-1];
            }
        }else dp[i]=dp[i-1];
    }
    for(ll i=1;i<dp.size();i++)cout<<dp[i]<<" ";
    cout<<nl;
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