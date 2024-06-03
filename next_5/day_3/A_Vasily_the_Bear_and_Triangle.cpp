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
    ll x,y;cin>>x>>y;
    ll d=abs(x)+abs(y);
    if(x>0&&y>0){
        cout<<0<<" "<<d<<" "<<d<<" "<<0;
    }else if(x<0&&y>0){
        cout<<-d<<" "<<0<<" "<<0<<" "<<d;
    }else if(x>0&&y<0){
        cout<<0<<" "<<-d<<" "<<d<<" "<<0;
    }else if(x<0&&y<0){
        cout<<-d<<" "<<0<<" "<<0<<" "<<-d;
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