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
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    if(n==1){
        if(a[0]%k==0){
            yes;
            cout<<1<<nl;
            return;
        }else{
            no;
            return;
        }
    }
    for(ll i=0;i<n;i++){
        ll cnt=0;
        for(ll j=0;j<n;j++){
            if(i==j)continue;
            if(abs(a[i]-a[j])%k!=0){
                cnt++;
            }
            if(cnt==n-1){
                yes;
                cout<<i+1<<nl;
                return;
            }
        }
    }
    no;
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