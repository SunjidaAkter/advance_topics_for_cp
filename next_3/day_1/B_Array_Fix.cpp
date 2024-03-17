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
    ll a[n];
    for(ll i=0; i<n;i++)cin>>a[i];
    bool f=1;
    ll p=0;
    for(ll i=0; i<n;i++){
        if(a[i]>=10&&p<=a[i]/10&&a[i]/10<=a[i]%10){
            p=a[i]%10;
        }else{
            if(p<=a[i]){
                p=a[i];
            }else{
                f=0;
                break;
            }
        }
    }
    if(f)yes;
    else no;
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