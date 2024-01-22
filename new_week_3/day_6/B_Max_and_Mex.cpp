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
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    set<ll>st;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    sort(all(v));
    ll mex=-1;
    for(ll i=0;i<n;i++){
        if(v[i]!=i){
            mex=i;
            break;
        }
    }
    if(mex==-1)mex=n;
    ll add=(v[n-1]+mex+1)/2;
    if(mex==n||k==0){
        cout<<st.size()+k<<nl;
    }else{
        st.insert(add);
        cout<<st.size()<<nl;
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