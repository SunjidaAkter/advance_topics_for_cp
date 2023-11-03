#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=INT_MAX;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i]>mid)sum+=abs(a[i]-mid);
        }
        if(sum>=m){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans<<endl;
    return 0;
}