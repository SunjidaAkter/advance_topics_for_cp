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
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=0){
        cout<<0<<nl;
    }else{
        if(abs(sum)%n==0){
            cout<<abs(sum)/n<<nl;
        }else{
            cout<<((n-abs(sum)%n)+abs(sum))/n<<nl;
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