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
    ll a[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    ll i=1;
    while(k>0 && i<n){
        if(i%2==1){
            ll sum=a[i-1]-a[i];
            if(k>=(sum)){
                a[i]+=(sum);
                k-=(sum);
            }else{
                a[i]+=k;
                k=0;
                break;
            }
        }
        i++;
    }
    
    ll alice=0,bob=0;
    for(ll i=0; i<n; i++){
        if(i%2==0)alice+=a[i];
        else bob+=a[i];
    }
    cout<<alice-bob<<endl;
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