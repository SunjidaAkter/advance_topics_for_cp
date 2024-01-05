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
    ll a[n],f[100001]={0};
    for(ll i=0;i<n;i++)cin>>a[i];
    ll i=0,pre=0,ans=0,num=0;
    if(k==0)cout<<0;
    else{
        while(i<n){
            while(i<n&&num<=k){
                f[a[i]]++;
                if(f[a[i]]==1){
                    num++;
                }
                if(num<=k){
                    ans+=(i-pre+1);
                    i++;
                }else break;
            }
            if(i<n){
                f[a[i]]--;
                if(f[a[i]]==0)num--;
            }
            f[a[pre]]--;
            if(f[a[pre]]==0)num--;
            pre++;
        }
        cout<<ans;
    }
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