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
    ll a[8],m=0;
    for(ll i=0;i<8;i++)a[i]=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a[x]++;
    }
    vector<ll>x;
    vector<ll>y;
    vector<ll>z;
    if(a[5]>0||a[7]>0){
        cout<<-1<<nl;
        return;
    }
    if(a[1]>=a[4]&&a[2]>=a[4]){
        for(ll i=0;i<a[4];i++){
            x.push_back(1);
            y.push_back(2);
            z.push_back(4);
        }
        a[1]-=a[4];
        a[2]-=a[4];
    }else{
        cout<<-1<<nl;
        return;
    }
    if(a[2]+a[3]<=a[6]&&a[1]==a[6]){
        for(ll i=0;i<a[2];i++){
            x.push_back(1);
            y.push_back(2);
            z.push_back(6);
        }
        for(ll i=0;i<a[3];i++){
            x.push_back(1);
            y.push_back(3);
            z.push_back(6);
        }
    }else{
        cout<<-1<<nl;
        return;
    }
    for(ll i=0;i<x.size();i++){
        cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<nl;
    }
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