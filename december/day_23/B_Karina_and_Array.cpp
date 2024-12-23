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
    if(n==2){
        cout<<a[0]*a[1]<<nl;
        return;
    }
    vector<ll>pos;
    vector<ll>neg;
    for(ll i=0; i<n; i++)if(a[i]>=0)pos.push_back(a[i]); else neg.push_back(abs(a[i]));
    // if(pos.size())for(ll i=0; i<pos.size(); i++)cout<<pos[i]<<" ";
    // cout<<nl;
    // if(neg.size())for(ll i=0; i<neg.size(); i++)cout<<neg[i]<<" ";
    // cout<<nl;
    if(neg.size()<=1){
        sort(all(pos));
        reverse(all(pos));
        cout<<pos[0]*pos[1]<<nl;
        return;
    }
    if(pos.size()<=1){
        sort(all(neg));
        reverse(all(neg));
        cout<<neg[0]*neg[1]<<nl;
        return;
    }
    sort(all(pos));
    reverse(all(pos));
    sort(all(neg));
    reverse(all(neg));
    cout<<max(pos[0]*pos[1],neg[0]*neg[1])<<nl;
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