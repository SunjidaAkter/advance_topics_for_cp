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
    ll m,n;cin>>m>>n;
    vector<ll> a(m),b(n);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    vector<ll> c(m+n);
    ll i=0,j=0,k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++,k++;
        }else{
            c[k]=b[j];
            j++,k++;
        }
    }
    if(i<m){
        while(i<m){
            c[k]=a[i];
            i++,k++;
        }
    }
    if(j<n){
        while(j<n){
            c[k]=b[j];
            j++,k++;
        }
    }
    for(ll val:c)cout<<val<<" ";
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