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
    ll n,m;cin>>n>>m;
    ll s=n+m+1;
    vector<ll>a(s);
    vector<ll>b(s);
    for(ll i=0;i<s;i++)cin>>a[i];
    for(ll i=0;i<s;i++)cin>>b[i];
    ll x=n,y=m,swp=0,k=-1;
    for(ll i=0;i<s;i++){
        if(a[i]>b[i])x--;
        else y--;
        if(y<0)swp=1;
        if(x<0||y<0){
            k=i;
            break;
        }
    }
    if(swp==1){
        swap(n,m);
        swap(a,b);
    }
    ll total=0;
    for(ll i=0;i<s;i++){
        if(k==i)continue;
        if(i<k){
            total+=max(a[i],b[i]);
        }else total+=b[i];
    }
    for(ll i=0;i<s;i++){
        if(k==i)cout<<total<<" ";
        else if(i<k && a[i]>b[i]){
            ll ans=total;
            ans+=a[k];
            ans-=a[i];
            cout<<ans<<" ";
        }else if(i<k){
            ll ans=total;
            ans+=b[k];
            ans-=b[i];
            cout<<ans<<" ";
        }else{
            ll ans=total;
            ans+=b[k];
            ans-=b[i];
            cout<<ans<<" ";
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