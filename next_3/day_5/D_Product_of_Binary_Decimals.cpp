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
const ll mx=1e5+2;
vector<ll>cm,dp(mx,0);
void solve(){
    cm.push_back(1);
    for(ll i=0;i<cm.size();i++){
        if(cm[i]*10>mx)break;
        cm.push_back(cm[i]*10);
        cm.push_back(cm[i]*10+1);
    }
    dp[1]=1;
    for(ll i=2;i<mx;i++){
        for(ll j=0;j<cm.size();j++){
            dp[i]=dp[i] | ((i%cm[j]==0) ? dp[i/cm[j]] : 0);
        }
    }
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    solve();
    while(t--){
        ll n;cin>>n;
        if(dp[n])yes;
        else no;
    }
    return 0;
}