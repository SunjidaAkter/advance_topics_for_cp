#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n,k,sum=0;cin>>n>>k;
    while(n>0){
        sum++;
        n/=k;
    }
    cout<<sum;
    return 0;
}