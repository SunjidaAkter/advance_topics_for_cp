#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++)sum+=a[i];
    if(sum%360==0)cout<<"YES"<<endl;
    else{
        ll pre[n-1],suf[n-1];
        pre[0]=a[0];
        for(ll i=1;i<n-1;i++)pre[i]=a[i]+pre[i-1];
        suf[n-2]=a[n-1];
        for(ll i=n-2;i>=1;i--)suf[i-1]=a[i]+suf[i];
        bool ok=false;
        for(ll i=0;i<n-1;i++){if(suf[i]==pre[i]){ok=true;break;}}
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        for(ll i=0;i<n;i++)cout<<pre[i]<<" ";
        cout<<endl;
        for(ll i=0;i<n;i++)cout<<suf[i]<<" ";
    }
    return 0;
}