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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    ll m;cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(all(b));
    ll i=0,j=0,cnt=0,chk=1;
    while(i<n&&j<m){
        if(abs(a[i]-b[j])<=1){
            cnt++;
            i++;
            j++;
        }else if(a[i]<b[j])i++;
        else j++;
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