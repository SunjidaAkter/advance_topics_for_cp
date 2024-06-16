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
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y2-y1)<<" "<<y2;
        return;
    }
    if(y1==y2){
        cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x2-x1);
        return;
    }
    if(abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        return;
    }
    cout<<-1;
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