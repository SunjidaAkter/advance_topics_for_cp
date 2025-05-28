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
    ll a[n][5];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<5;j++)cin>>a[i][j];
    }
    bool res=0;
    for(ll i=0;i<5;i++){
        for(ll j=0;j<5;j++){
            if(i!=j){
                ll cnt1=0;
                ll cnt2=0;
                ll cnt0=0;
                for(ll k=0;k<n;k++){
                    if(a[k][i]==1)cnt1++;
                    if(a[k][j]==1)cnt2++;
                    if(a[k][i]==0&&a[k][j]==0)cnt2++;
                }
                if(cnt1>=n/2&&cnt2>=n/2&&cnt0==0)res=1;
            }
        }
    }
    if(res)yes;
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