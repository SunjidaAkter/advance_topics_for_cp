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
    ll a[n],b[n],mxA=0,mxB=0,mx=0,cnt=0;
    map<ll,ll>mpA,mpB;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    for(ll i=0;i<n;i++){
        cnt++;
        if(i==n-1||a[i]!=a[i+1]){
            if(mpA[a[i]]==0)mpA[a[i]]=cnt;
            else mpA[a[i]]=max(mpA[a[i]],cnt);
            cnt=0;
        }
    }
    cnt=0;
    for(ll i=0;i<n;i++){
        cnt++;
        if(i==n-1||b[i]!=b[i+1]){
            if(mpB[b[i]]==0)mpB[b[i]]=cnt;
            else mpB[b[i]]=max(mpB[b[i]],cnt);
            cnt=0;
        }
    }
    for(auto it:mpA){
        mxA=mpA[it.first]+mpB[it.first];
        mx=max(mx,mxA);
    }
    for(auto it:mpB){
        mxB=mpA[it.first]+mpB[it.first];
        mx=max(mx,mxB);
    }
    cout<<mx<<nl;
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