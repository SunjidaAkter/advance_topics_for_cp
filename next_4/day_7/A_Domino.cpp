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
    vector<pii>v(n);
    ll sum1=0,sum2=0;
    bool b=0;
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        if((v[i].first%2==0&&v[i].second%2==1)||(v[i].first%2==1&&v[i].second%2==0))b=1;
        sum1+=v[i].first,sum2+=v[i].second;
    }
    if(sum1%2==0&&sum2%2==0){
        cout<<0<<nl;
    }else if(sum1%2==1&&sum2%2==1&&b){
        cout<<1<<nl;
    }else{
        cout<<-1<<nl;
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