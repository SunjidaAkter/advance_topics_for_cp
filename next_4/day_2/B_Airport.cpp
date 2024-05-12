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
    ll nn,mm;cin>>nn>>mm;
    ll n=nn,m=mm;
    ll a[m];
    for(ll i=0;i<m;i++)cin>>a[i];
    sort(a,a+m);
    // reverse(a,a+m);
    ll mn=0,mx=0,i=0;
    while(n>0){
        if(n>=a[i]&&i<m){
            mn+=((a[i]+1)*a[i])/2;
            n-=a[i],i++;
        }else break;
    }
    if(i<m&&n>0){
        ll x=a[i]-n;
        mn+=(((a[i]+1)*a[i])/2)-((x*(x+1))/2);
    }
    n=nn,m=mm;
    // cout<<mx<<" nl "<<m<<" ";
    reverse(a,a+m);
    multiset<ll,greater<ll>>mst;
    for(ll i=0;i<m;i++)mst.insert(a[i]);
    for(ll i=0;i<n;i++){
        ll x=*mst.begin();
        mx+=x;
        mst.erase(mst.begin());
        x--;
        if(x>0){
            mst.insert(x);
        }
    }
    cout<<mx<<" "<<mn<<nl;
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