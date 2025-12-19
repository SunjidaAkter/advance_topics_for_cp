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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>diff;
    for(ll i=1;i<n;i++){
        diff.push_back(a[i]-a[i-1]);
    }
    sort(all(diff));
    ll d=diff[0],sum=0;
    for(ll i=1;i<diff.size();i++){
        if(diff[i]>d){
            sum+=((diff[i]/d)-1);
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