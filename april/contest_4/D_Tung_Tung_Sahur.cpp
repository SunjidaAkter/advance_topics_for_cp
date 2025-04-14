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
    string x,y;cin>>x>>y;
    vector<pair<ll,char>>a;
    vector<pair<ll,char>>b;
    ll cnt=1;
    for(ll i=1;i<x.size();i++){
        if(x[i-1]==x[i])cnt++;
        else{
            a.push_back({cnt,x[i-1]});
            cnt=1;
        }
    }
    a.push_back({cnt,x[x.size()-1]});
    cnt=1;
    for(ll i=1;i<y.size();i++){
        if(y[i-1]==y[i])cnt++;
        else{
            b.push_back({cnt,y[i-1]});
            cnt=1;
        }
    }
    b.push_back({cnt,y[y.size()-1]});
    cnt=1;
    if(a.size()!=b.size()){
        no;return;
    }
    for(ll i=0;i<a.size();i++){
        if(a[i].second!=b[i].second){
            no;return;
        }
    }
    for(ll i=0;i<a.size();i++){
        if(b[i].first>2*a[i].first||b[i].first<a[i].first){
            no;return;
        }
    }
    yes;
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