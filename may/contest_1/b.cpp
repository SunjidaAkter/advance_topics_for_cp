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
    
    ll n,x,y;cin>>n>>x>>y;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    if(x==y){
        cout<<*min_element(all(a))<<nl;
        return;
    }
    if(x==1&&y==n){
        cout<<accumulate(all(a),0)<<nl;
        return;
    }
    ll mx=LONG_MIN,mn=LONG_MAX,mxx=0,mnn=0;
    for(ll i=0;i<n;i++){
        if(i>=x-1&&i<=y-1)continue;
        if(mn>=a[i]){
            mn=a[i];
            mnn=i;
        }
    }
    for(ll i=x-1;i<=y-1;i++){
        if(mnn<=(n/2)+(n%2)){
            if(mx<=a[i]){
                mx=a[i];
                mxx=i;
            }
        }else{
            if(mx<a[i]){
                mx=a[i];
                mxx=i;
            }
        }
    }
    if(mxx<mnn)swap(mxx,mnn);
    // cout<<mnn<<" "<<mxx<<nl;
    ll i=mnn,j=mxx;
    while(i<j){
        swap(a[i],a[j]);
        i++,j--;
    }
    ll sum=0;
    for(ll i=x-1;i<=y-1;i++){
        sum+=a[i];
    }
    cout<<sum<<nl;

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