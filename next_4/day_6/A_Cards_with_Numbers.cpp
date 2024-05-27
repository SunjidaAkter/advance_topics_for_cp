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
    vector<pii>v(2*n);
    for(int i=0;i<2*n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(all(v));
    bool ok = true;
    for(int i=0;i<2*n;i+=2){
        if(v[i].first!=v[i+1].first){
            ok=false;
            break;
        }
    }
    if(ok){
        for(int i=0;i<2*n;i+=2){
            cout<<v[i].second<<" "<<v[i+1].second<<nl;
        }
    }else{
        cout<<-1<<nl;
    }
}
int main(){
    FAST;
    #ifdef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);  
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}