#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool isValid(int mid,int a[],int n,int m){
    int cnt=1;
    int last=0;
    for(int i=0;i<n;i++){
        if(last+a[i]>mid){
            cnt++;
            last=0;
        }
        last+=a[i];
    }
    return (cnt<=m);
}
int main(){
    int n,m;
    while(cin>>n>>m){
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=INT_MAX,l=0,r=INT_MAX;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(mid,a,n,m)){
                ans=min(mid,ans);
                r=mid-1;
            }else l=mid+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}