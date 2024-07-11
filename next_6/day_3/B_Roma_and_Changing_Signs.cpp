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
    sort(a,a+n);
    ll cnt=0,sum=0;
    for(ll i=0;i<n;i++){
        if(a[i]<0)cnt++;
    }
    if(cnt==k){
        for(ll i=0;i<n;i++)sum+=abs(a[i]);
        cout<<sum<<nl;
        return;
    }
    if(cnt>k){
        ll kk=k;
        for(ll i=0;i<n;i++){
            if(a[i]<0 && kk>0){
                sum+=abs(a[i]);
                kk--;
            }else sum+=(a[i]);
        }
        cout<<sum<<nl;
        return;
    }
    if(cnt<k){
        k-=cnt;
        if(k%2==0){
            for(ll i=0;i<n;i++)sum+=abs(a[i]);
            cout<<sum<<nl;
            return;
        }else{
            for(ll i=0;i<n;i++)if(a[i]<0)a[i]=abs(a[i]);
            sort(a,a+n);
            for(ll i=0;i<n;i++)sum+=abs(a[i]);
            sum-=2*a[0];
            cout<<sum<<nl;
            return;
        }
    }
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}