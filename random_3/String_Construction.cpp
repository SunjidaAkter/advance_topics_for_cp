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
    ll n,k;cin>>n>>k;
    if(n-k<2){
        cout<<-1<<nl;
        return;
    }
    ll x=n-(k+1),i;
    string s="";
    for( i=0;i<x;i++){
        if(i%2==0)s+='1';
        else s+='0';
    }
    ll rem=n-x;
    if(n%2){
        if(rem%2){
            for(ll i=1;i<=(rem/2);i++)s+='0';
            for(ll i=1;i<=(rem/2)+1;i++)s+='1';
            cout<<s<<nl;
        }else{
            for(ll i=1;i<=(rem/2);i++)s+='1';
            for(ll i=1;i<=(rem/2);i++)s+='0';
            cout<<s<<nl;
        }
    }else{
        if(rem%2){
            for(ll i=1;i<=(rem/2);i++)s+='1';
            for(ll i=1;i<=(rem/2)+1;i++)s+='0';
            cout<<s<<nl;
        }else{
            for(ll i=1;i<=(rem/2);i++)s+='0';
            for(ll i=1;i<=(rem/2);i++)s+='1';
            cout<<s<<nl;
        }

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