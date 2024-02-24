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
    ll a[n],f=0;
    set<ll>st;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    for(ll i=0;i<n;i++){
        if(a[i]==0){
            f=1;break;
        }
    }
    if(f&&st.size()==1){
        cout<<0<<nl;
        return;
    }
    if(n%2){
        cout<<4<<nl;
        cout<<1<<" "<<n<<nl;
        cout<<2<<" "<<n<<nl;
        cout<<1<<" "<<2<<nl;
        cout<<1<<" "<<2<<nl;
        return;
    }
    cout<<2<<nl;
    cout<<1<<" "<<n<<nl;
    cout<<1<<" "<<n<<nl;
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