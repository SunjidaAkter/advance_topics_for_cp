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
    ll n,cnt=0;cin>>n;
    vector<ll>a(n+1);
    a[0]=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    vector<ll>b(n+1);
    b[0]=0;
    for(ll i=1;i<=n;i++)cin>>b[i];
    for(ll i=1; i<=n; i++){
        if(a[b[i]]==b[i]){
            cnt++;
            cout<<cnt<<" ";
        }else if(a[b[i]]==0){
            cout<<cnt<<" ";
        }else{
            ll j=b[i];
            while(a[j]!=b[i]){
                ll tmp=a[j];
                a[j]=0;
                j=tmp;
                cnt++;
            }
            a[j]=0;
            cnt++;
            cout<<cnt<<" ";
        }
    }
    cout<<nl;
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