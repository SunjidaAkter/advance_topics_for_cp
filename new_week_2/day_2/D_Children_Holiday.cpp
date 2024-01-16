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
int m,n;
const int mx=1e3+5;
int t[mx],z[mx],y[mx];
bool good(int x){
    int total=0;
    for(int i=0;i<n;i++){
        int cycle=t[i]*z[i]+y[i];
        int balloons=(x/cycle)*z[i]+min((x%cycle)/t[i],z[i]);
        total+=balloons;
        if(total>=m)return true;
    }
    return false;
}
void baloon(int x){
    int total=0;
    for(int i=0;i<n;i++){
        if(total>=m){
            cout<<0<<" ";
            continue;
        }
        int cycle=t[i]*z[i]+y[i];
        int balloons=(x/cycle)*z[i]+min((x%cycle)/t[i],z[i]);
        cout<<min(balloons,m-total)<<" ";
        total+=balloons;
    }
    cout<<nl;
}
void solve(){
    cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>t[i]>>z[i]>>y[i];
    }
    int l=-1,r=1;
    while(!good(r)){
        l=r;
        r*=2;
    }
    cout<<l<<"nl"<<r<<nl;
    while(r>l+1){
        int mid=l+((r-l)/2);
        if(good(mid))r=mid;
        else l=mid;
    }
    cout<<r<<nl;
    baloon(r);
}
int main(){
    FAST;
    int test=1;
    // cin>>t;
    while(test--){
        solve();
    }
    return 0;
}