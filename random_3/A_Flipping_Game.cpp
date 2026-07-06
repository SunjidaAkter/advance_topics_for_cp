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
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll ones=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            ones++;
            v[i]=-1;
        }else v[i]=1;
    }
    ll cnt=0,mx=v[0];
    for(int i=0;i<n;i++){
        cnt+=v[i];
        mx=max(mx,cnt);
        if(cnt<0)cnt=0;
    }
    cout<<ones+mx<<nl;
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