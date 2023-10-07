#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int k,s,sum=0;cin>>k>>s;
    forl(i,0,k+1){
        forl(j,0,k+1){
            int z=s-(i+j);
            if(z>=0&&z<=k)sum++;
        }
    }
    cout<<sum;
    return 0;
}