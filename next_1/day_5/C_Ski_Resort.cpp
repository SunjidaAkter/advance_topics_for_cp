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
ll fact(ll n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
void solve(){
    ll n,k,q;cin>>n>>k>>q;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<vector<ll>>v;
    vector<ll>tmp;
    for(ll i=0;i<n;i++){
        if(a[i]<=q){
            tmp.push_back(a[i]);
        }else{
            if(tmp.size()>0){
                v.push_back(tmp);
                tmp.clear();
            }
        }
    }
    if(tmp.size()>0){
        v.push_back(tmp);
        tmp.clear();
    }
    ll sum=0;
    for(auto val:v){
        ll x=val.size();
        if(x>=k)sum+=((x-(k-1))*(x-(k-1)+1)/2);
    }
    cout<<sum<<nl;
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