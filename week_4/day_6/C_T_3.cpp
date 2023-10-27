#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int cnt(int a,int b,int n){
    int c=0;
    for(int i=0;i<n;i++){
        bool aa=((1<<i)&a);
        bool bb=((1<<i)&b);
        if(aa!=bb)c++;
    }
    return c;
}
int main(){
    int n,m,k;cin>>n>>m>>k;
    m++;int a[m],c=0;
    for(int i=0;i<m;i++){
        cin>>a[m];
    }
    int aa=a[m-1];
    for(int i=0;i<m-1;i++){
        if(cnt(aa,a[i],n)<=k)c++;
    }
    cout<<c<<endl;
    return 0;
}