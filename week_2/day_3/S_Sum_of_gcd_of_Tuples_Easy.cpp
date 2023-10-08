#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int gcd(int x,int y,int z){
    int n=__gcd(x,y);
    return __gcd(n,z);
}
int main(){
    int n,sum=0;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                sum+=gcd(i,j,k);
            }
        }
    }
    cout<<sum;
    return 0;
}