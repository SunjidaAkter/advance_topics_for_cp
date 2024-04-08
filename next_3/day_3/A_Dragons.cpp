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
    ll s,n;cin>>s>>n;
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    ll f=1;
    sort(all(v));
    // for(ll i=0;i<n;i++){
    //     cout<<v[i].first<<" ";
    // }
    for(ll i=0;i<n;i++){
        if(s>v[i].first){
            s+=v[i].second;
        }else{
            f=0;
            break;
        }
    }
    if(f)yes;
    else no;
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