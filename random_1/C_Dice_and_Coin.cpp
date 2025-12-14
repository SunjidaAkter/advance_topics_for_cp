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
    double n,k;cin>>n>>k;
    double res=0;
    for(ll i=1;i<=n;i++){
        ll flip=0,temp=i;
        while(temp<k){
            temp*=2;
            flip++;
        }
        res+=pow(0.5,flip);
    }
    cout<<fixed<<setprecision(12)<<res/n<<nl;
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