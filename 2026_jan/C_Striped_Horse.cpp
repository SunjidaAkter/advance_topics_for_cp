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
    ll n,w;cin>>n>>w;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(n<=w){
        cout<<0<<nl;
        return;
    }
    ll i=0,sum=0;
    for(ll i=0;i<n;i++){
        if(i%(2*w)<w){
            sum+=v[i];
        }
    }
    ll mn=sum,x=w;
    while(w>0){
        for(ll i=0+(x-w);i<n;i+=(2*(x))){
            sum-=v[i];
            if(i+x<n){
                sum+=v[i+x];
            }
        }
        // cout<<sum<<" initial nl "<<w<<" test ";
        // cout<<sum<<" initial nl ";
        // cout<<sum<<" nl ";
        mn=min(mn,sum);
        w--;
    }
    w=x;
    while(w>0){
        for(ll i=0+(x-w);i<n;i+=(2*(x))){
            sum+=v[i];
            if(i+x<n){
                sum-=v[i+x];
            }
        }
        // cout<<sum<<" nl ";
        mn=min(mn,sum);
        w--;
    }
    cout<<mn<<nl;
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