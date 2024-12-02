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
bool check(ll k,ll n,vector<ll>&v){

}
void solve(){
    ll n;cin>>n;
    ll a[n],mx=0,mn=1e18;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<nl;
        return;
    }
    if(n%2==0){
        for(ll i=0;i<n-1;i+=2){
            mx=max(mx,abs(a[i]-a[i+1]));
        }
        cout<<mx<<nl;
        return;
    }else{
        for(ll i=0;i<n;i+=2){
            mx=0;
            for(ll j=0;j<n;){
                if(j==i) mx=max(mx,(ll)1),j++;
                else mx=max(mx,abs(a[j]-a[j+1])),j+=2;
                // cout<<"mx="<<mx<<" ";
            }
            mn=min(mn,mx);
        }
        cout<<mn<<nl;
        return;
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