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
    vector<string>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if((v[0][1]==v[1][0])&&(v[n-1][n-2]==v[n-2][n-1])){
        if(v[0][1]==v[n-1][n-2]){
            cout<<2<<nl;
            cout<<1<<" "<<2<<nl;
            cout<<2<<" "<<1<<nl;
        }else cout<<0<<nl;
    }else if(v[0][1]==v[1][0]){
        cout<<1<<nl;
        if(v[0][1]==v[n-1][n-2]){
            cout<<n<<" "<<n-1<<nl;
        }else{
            cout<<n-1<<" "<<n<<nl;
        }
    }else if(v[n-1][n-2]==v[n-2][n-1]){
        cout<<1<<nl;
        if(v[0][1]==v[n-1][n-2]){
            cout<<1<<" "<<2<<nl;
        }else{
            cout<<2<<" "<<1<<nl;
        }
    }else if(v[0][1]!=v[1][0]){
        cout<<2<<nl;
        cout<<1<<" "<<2<<nl;
        if(v[0][1]==v[n-1][n-2]){
            cout<<n-1<<" "<<n<<nl;
        }else{
            cout<<n<<" "<<n-1<<nl;
        }
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