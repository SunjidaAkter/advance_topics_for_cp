#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n,m;cin>>n>>m;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        ll y=upper_bound(a.begin(),a.end(),x)-a.begin();
        cout<<y<<" ";
    }
    return 0;
}