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
    ll a[n],b[n],cnt=0;
    for(ll k=0;k<n;k++){
        cin>>a[k]>>b[k];
    }
    for(ll k=0;k<n;k++){
        ll u=0,d=0,l=0,r=0;
        ll x=a[k],y=b[k];
        for(ll i=0;i<n;i++){
            if(a[i]==x){
                if(y<b[i])u++;
                if(y>b[i])d++;
            }
            if(b[i]==y){
                if(x<a[i])r++;
                if(x>a[i])l++;
            }
        }
        if(u>0&&d>0&&l>0&&r>0)cnt++;
    }
    cout<<cnt<<nl;
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