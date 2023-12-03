#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    if(n==2)cout<<1<<'\n'<<2;
    if(n==3)cout<<1<<'\n'<<3;
    if(n>3){
        cout<<n/2<<'\n';
        if(n&1){
            for(int i=1;i<=((n/2)-1);i++)cout<<2<<" ";
            cout<<3;    
        }else{
            for(int i=1;i<=(n/2);i++)cout<<2<<" ";
        }
    }
    return 0;
}