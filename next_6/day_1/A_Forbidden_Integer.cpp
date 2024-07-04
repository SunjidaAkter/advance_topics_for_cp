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
    ll n,k,x;cin>>n>>k>>x;
    if(x!=1){
        yes;
        cout<<n<<nl;
        for(ll i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<nl;
    }else if(x==1){
        if(n%2==0&&k>=2){
            yes;
            cout<<n/2<<nl;
            for(ll i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<nl;
        }else if(n%2==0&&k<2){
            no;
        }else if(n%2==1&&k>=3){
            yes;
            cout<<n/2<<nl;
            for(ll i=0;i<n/2-1;i++){
                cout<<2<<" ";
            }
            cout<<3<<nl;
        }else if((n%2==1&&k<=2)){
            no;
        }else no;
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