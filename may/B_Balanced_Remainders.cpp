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
    vector<ll>c(3);
    for(ll i=0;i<n;i++){
        if(a[i]%3==0)c[0]++;
        if(a[i]%3==1)c[1]++;
        if(a[i]%3==2)c[2]++;
    }
    ll sum=0;
    while(*min_element(all(c))!=n/3){
        for(ll i=0;i<3;i++){
            if(c[i]>n/3){
                sum++;
                c[i]--;
                c[(i+1)%3]++;
            }
        }
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