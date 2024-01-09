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
    ll a[n],b[n],x=0,y=n-1;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    ll f,s,f1=-1,s1=-1;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            f=i;
            break;
        }
    }
    for(ll i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            s=i;
            break;
        }
    }
    for(ll i=f;i>0;i--){
        if(b[i]>=b[i-1])f1=i-1;
        else break;
    }
    for(ll i=s;i<n-1;i++){
        if(b[i+1]>=b[i])s1=i+1;
        else break;
    }
    // cout<<f<<" "<<f1<<" "<<s<<" "<<s1<<nl;
    if(f1==-1)cout<<f+1<<" ";
    else cout<<f1+1<<" ";
    if(s1==-1)cout<<s+1<<nl;
    else cout<<s1+1<<nl;
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