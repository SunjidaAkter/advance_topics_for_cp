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
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(all(a));
    sort(all(b));
    ll cnt=0,j=0,i=0;
    while(i<n&&j<m){
        if(a[i]>=b[j]){
            if(abs(a[i]-b[j])<=k){
                i++;
                j++;
                cnt++;
            }else{
                j++;
            }
        }else{
            if(abs(a[i]-b[j])<=k){
                i++;
                j++;
                cnt++;
            }else{
                i++;
            }

        }
    }
    cout<<cnt<<nl;
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