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
    ll n,f,k;cin>>n>>f>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll x=a[f-1];
    sort(a,a+n);
    reverse(a,a+n);
    ll first=0,last=0;
    for(ll i=0;i<n;i++){
        if(a[i]==x){
            first=i;
            break;
        }
    }
    for(ll i=0;i<n;i++){
        if(a[i]==x){
            last=i;
        }
    }
    first++,last++;
    // cout<<first<<"x"<<last<<nl;
    if(k<first){
        no;
    }else if(k>=first&&k<last)cout<<"MAYBE"<<nl;
    else if(k>=last)yes;
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