#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)sum+=a[i];
    if(sum%360==0)cout<<"YES"<<endl;
    else{
        int pre[n-1],suf[n-1];
        pre[0]=a[0];
        for(int i=1;i<n-1;i++)pre[i]=a[i]+pre[i-1];
        suf[n-2]=a[n-1];
        for(int i=n-2;i>=1;i--)suf[i-1]=a[i]+suf[i];
        bool ok=false;
        for(int i=0;i<n-1;i++){if(suf[i]==pre[i]){ok=true;break;}}
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}