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
    if(n<5){
        cout<<-1<<nl;
        return;
    }
    vector<ll>odd,even;
    even.push_back(4);
    for(ll i=1;i<=n;i++){
        if(i==5)continue;
        if(i==4)continue;
        if(i%2==0)even.push_back(i);
        if(i%2!=0)odd.push_back(i);
    }
    odd.push_back(5);
    for(auto &x:odd)cout<<x<<" ";
    for(auto &x:even)cout<<x<<" ";
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