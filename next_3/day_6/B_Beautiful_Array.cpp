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
    ll n,k,b,s;cin>>n>>k>>b>>s;
    ll mn=b*k;
    ll rem=s-mn;
    if(s<mn||n*(k-1)<rem){
        cout<<-1<<nl;
        return;
    }
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        if(b){
            v[i]=1;
            b--;
        }else{
            v[i]=0;
        }
    }
    if(b){
        v[n-1]+=b;
    }
    for(ll i=0;i<n;i++){
        v[i]*=k;
        s-=v[i];
    }
    if(s){
        for(ll i=0;i<n;i++){
            if(s>=(k-1)){
                v[i]+=(k-1);
                s-=(k-1);
            }else{
                v[i]+=s;
                s=0;
            }
        }
    }
    for(ll val:v)cout<<val<<" ";
    cout<<nl;
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