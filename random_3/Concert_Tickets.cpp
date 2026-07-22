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
    ll n,m;cin>>n>>m;
    vector<ll>ticket(n);
    vector<ll>customer(m);
    for(ll i=0;i<n;i++)cin>>ticket[i];
    for(ll i=0;i<m;i++)cin>>customer[i];
    sort(all(ticket));
    for(ll i=0;i<m;i++){
        ll idx=lower_bound(all(ticket),customer[i])-ticket.begin();
        if(ticket[idx]!=customer[i])idx--;
        cout<<ticket[idx]<<nl;    
        ticket[idx]=-1;
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