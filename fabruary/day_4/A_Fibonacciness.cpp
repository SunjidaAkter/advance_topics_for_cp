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
    ll a1,a2,a4,a5;cin >> a1 >> a2 >> a4 >> a5;
    ll a3=a1+a2;
    ll sum1=0,sum2=0;
    if(a3==a1+a2)sum1++;
    if(a4==a3+a2)sum1++;
    if(a5==a3+a4)sum1++;
    a3=a4-a2;
    if(a3==a1+a2)sum2++;
    if(a4==a3+a2)sum2++;
    if(a5==a3+a4)sum2++;
    cout<<max(sum2,sum1)<<nl;
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