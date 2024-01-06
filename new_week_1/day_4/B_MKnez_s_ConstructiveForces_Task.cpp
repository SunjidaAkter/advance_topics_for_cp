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
    if(n==3)no;
    else if(n%2==1){
        yes;
        for(ll i=0;i<n-1;i+=2)cout<<-((n/2)-1)<<" "<<n/2<<" ";
        cout<<-((n/2)-1)<<nl;
    }else if(n%2==0){
        yes;
        for(ll i=0;i<n;i+=2){
            cout<<1<<" "<<-1<<" ";
        }
        cout<<nl;
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