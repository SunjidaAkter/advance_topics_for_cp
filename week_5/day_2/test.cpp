#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x;cin>>x;
    int l=0,r=n-1,ans=-1;
    // while(l<=r){
    //     int mid=l+(r-l)/2;
    //     cout<<mid<<endl;
    //     if(x<=a[mid]){
    //         ans=mid;
    //         r=mid-1;
    //     }
    //     else if(x>a[mid])l=mid+1;
    //     // else if(x<a[mid])r=mid-1;
    // }
    // cout<<ans;
    while(l<=r){
        int mid=l+(r-l)/2;
        cout<<mid<<endl;
        if(x>=a[mid]){
            ans=mid;
            l=mid+1;
        }
        // else if(x>a[mid])l=mid+1;
        else if(x<a[mid])r=mid-1;
    }
    cout<<ans;
    return 0;
}