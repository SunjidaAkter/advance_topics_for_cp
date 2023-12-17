#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool isValid(ll mid,vector<ll>&a,vector<ll>&b,ll k){
    ll rem=k;
    for(int i=0;i<a.size();i++){
        if(b[i]<(a[i]*mid)){
            ll need=(a[i]*mid)-b[i];
            if(rem<need)return false;
            rem-=need;
        }
    }
    // cout<<cnt<<" here ";
    return true;
}
int main(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll l=1,r=2e9+1,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(isValid(mid,a,b,k)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    if(ans>0)cout<<ans;
    else cout<<0;
    return 0;
}