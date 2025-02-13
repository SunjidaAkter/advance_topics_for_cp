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
    for(ll i=0;i<n;i++)cin>>a[i];
    ll sum=0,odd=0;
    for(ll i=0;i<n;i++){
        if(a[i]%2==1 && a[i]>1){
            sum+=(a[i]-1);
            odd++;
        }else if(a[i]==1)odd++;
        else if(a[i]%2==0)sum+=a[i];
    }
    k-=(sum/2);
    if(odd>k){
        odd-=k;
        k-=odd;
        sum+=k;
    }else sum+=odd;
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