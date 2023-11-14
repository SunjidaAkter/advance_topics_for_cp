#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll q;cin>>q;
    ll s=0;
    ll mn=INT_MAX,msm=INT_MAX;
    vector<ll>v;
    while(q--){
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        sort(a,a+n);
        msm=min(msm,a[1]); 
        s+=a[1]; 
    }
    c(s+mn-msm);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}