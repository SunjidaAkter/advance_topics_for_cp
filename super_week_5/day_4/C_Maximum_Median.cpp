#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool isValid(ll m,vector<ll>&v,ll x){
    ll cnt=0;
    for(ll i=(v.size()/2);i<v.size();i++){
        if((m-v[i])>=0)cnt+=(m-v[i]);
        if(x<cnt)return false;
    }
    return (x>=cnt);
}
int main(){
    ll n,x;cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll l=1,r=2e9,ans=0;
    while(l<=r){
        ll m=l+(r-l)/2;
        if(isValid(m,v,x)){
            ans=m;
            l=m+1;
        }else{
            r=m-1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}