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
    for(auto &x:a)cin>>x;
    ll sum1=0,cnt1=0;
    for(ll i=0; i<n; i+=2){
        sum1+=a[i];
        cnt1++;
    }
    ll avg1=sum1/cnt1;
    ll sum2=0,cnt2=0;
    for(ll i=1; i<n; i+=2){
        sum2+=a[i];
        cnt2++;
    }
    ll avg2=sum2/cnt2;
    if(sum1%cnt1==0&&sum2%cnt2==0&&avg1==avg2)yes;
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