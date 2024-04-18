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
    string x2="",y2="";
    for(int i=0;i<x.size();i++){
        char cx=x[i];
        char cy=y[i];
        char mn=min(cx,cy);
        char mx=max(cx,cy);
        if(x2>=y2){
            x2+=mn;
            y2+=mx;
        }else{
            y2+=mn;
            x2+=mx;
        }
    }
    cout<<y2<<nl<<x2<<nl;
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