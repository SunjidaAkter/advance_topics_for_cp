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
    ll a[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    vector<ll>neg;
    vector<ll>pos;
    vector<ll>zer;
    for(ll i=0; i<n; i++){
        if(a[i]<0)neg.push_back(a[i]);
        if(a[i]>0)pos.push_back(a[i]);
        if(a[i]==0)zer.push_back(a[i]);
    }
    if(neg.size()==1){
        cout<<neg.size()<<" ";
        for(ll val:neg)cout<<val<<" ";
        cout<<nl;
        cout<<pos.size()<<" ";
        for(ll val:pos)cout<<val<<" ";
        cout<<nl;
        cout<<zer.size()<<" ";
        for(ll val:zer)cout<<val<<" ";
        cout<<nl;
        return;
    }
    if(neg.size()%2==1){
        cout<<1<<" ";
        cout<<neg[neg.size()-1];
        neg.pop_back();
        cout<<nl; 
        if(pos.size()>0){
            cout<<neg.size()+pos.size()<<" ";
            for(ll val:neg)cout<<val<<" ";
            for(ll val:pos)cout<<val<<" ";
            cout<<nl;
        }else{
            cout<<neg.size()<<" ";
            for(ll val:neg)cout<<val<<" ";
            cout<<nl;
        }
        cout<<zer.size()<<" ";
        for(ll val:zer)cout<<val<<" ";
        cout<<nl;
        return;
    }
    if(neg.size()%2==0){
        cout<<1<<" ";
        cout<<neg[neg.size()-1];
        neg.pop_back();
        ll x=neg[neg.size()-1];
        neg.pop_back();
        cout<<nl; 
        if(neg.size()>0&&pos.size()>0){
            cout<<neg.size()+pos.size()<<" ";
            for(ll val:neg)cout<<val<<" ";
            for(ll val:pos)cout<<val<<" ";
            cout<<nl;
        }else if(pos.size()>0){
            cout<<pos.size()<<" ";
            for(ll val:pos)cout<<val<<" ";
            cout<<nl;
        }else{
            cout<<neg.size()<<" ";
            for(ll val:neg)cout<<val<<" ";
            cout<<nl;
        }
        cout<<zer.size()+1<<" ";
        cout<<x<<" ";
        for(ll val:zer)cout<<val<<" ";
        cout<<nl;
        return;
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