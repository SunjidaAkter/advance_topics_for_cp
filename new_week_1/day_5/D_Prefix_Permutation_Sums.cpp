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
    vector<ll> a(n);
    for(ll i=0;i<n-1;i++)cin>>a[i];
    ll sum=n*(n+1)/2;
    if(a[n-2]>sum){
        no;return;
    }
    if(a[n-2]<sum){
        a[n-1]=sum;
        vector<bool>vis(n+1,0);
        if(a[0]<=n)vis[a[0]]=1;
        for(ll i=n-2;i>=0;i--){
            if((a[i+1]-a[i])<=n)vis[(a[i+1]-a[i])]=1;
        }
        bool f=1;
        for(ll i=1;i<=n;i++){
            if(vis[i]==0){
                f=0;
                break;
            }
        }
        if(f)yes;
        else no;
    }else if(a[n-2]==sum){
        vector<bool>vis(n+1,0);
        ll x;
        if(a[0]<=n)vis[a[0]]=1;
        for(ll i=n-3;i>=0;i--){
            if((a[i+1]-a[i])<=n)vis[(a[i+1]-a[i])]=1;
            else x=(a[i+1]-a[i]);
        }
        bool f=1;
        vector<ll>missing;
        for(ll i=1;i<=n;i++){
            if(vis[i]==0){
                missing.push_back(i);
            }
        }
        if(missing.size()!=2){
            no;return;
        }
        if(vis[(missing[0]+missing[1])]==1||(missing[0]+missing[1]==a[0])||(missing[0]+missing[1]==x))yes;
        // if(f)yes;
        else no;

    }
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