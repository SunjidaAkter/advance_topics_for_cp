#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int s;cin>>s;
    int a[n];
    forl(i,0,n)cin>>a[i];
    int i=0,j=0,sum=0,mx=0;
    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s){
            mx++;
        }
        j++;
    }
    cout<<mx; 
    return 0;
}