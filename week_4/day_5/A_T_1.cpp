#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    ll a[n];
    bool flag=false;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<(1<<n);i++){
        ll sum=0;
        for(int j=0;j<n;j++){
            int mask=1<<j;
            if((i&mask)==0)sum-=a[j];
            else sum+=a[j];
        }
        // cout<<sum<<" ";
        if(sum==0||(sum>=360&&sum%360==0))flag=true;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}