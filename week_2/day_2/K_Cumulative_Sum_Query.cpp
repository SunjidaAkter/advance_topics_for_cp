#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        int sum=0;
        for(int i=x;i<=y;i++)sum+=a[i];
        cout<<sum<<endl;
    }
    return 0;
}