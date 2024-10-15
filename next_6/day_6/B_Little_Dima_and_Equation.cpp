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
ll s(ll x){
    ll sum=0;
    while(x>0){
        sum+=x%10;
        x/=10;
    }
    return sum;
}
void solve(){
    ll a,b,c;cin>>a>>b>>c;
    vector<ll>v;
    for(ll i=1;i<=100;i++){
        ll x=b*pow(i,a)+c;
        if(x>0 and x<1e9 and s(x)==i){
            v.push_back(x);
        }
    }
    if(v.size()>0){
        cout<<v.size()<<nl;
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<nl;
    }else cout<<0<<nl;
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