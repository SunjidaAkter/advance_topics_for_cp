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
    ll n,s;cin>>n>>s;
    vector<ll> a(n);
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll i=0,j=0,ans=LONG_MAX;
    while(i<n){
        while(j<n&&sum+a[j]<=s){
            sum+=a[j];
            j++;
        }
        if(sum==s)ans=min(ans,n-(j-i));
        sum-=a[i];
        i++;
    }
    if(ans>n)cout<<-1<<nl;
    else cout<<ans<<nl;
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