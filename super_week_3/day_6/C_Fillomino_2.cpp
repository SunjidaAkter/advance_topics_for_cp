#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int v[n][n],a,b,x;
    memset(v,0,sizeof(v));
    for(int i=0;i<n;i++){
        cin>>x;
        a=i,b=i;
        int y=x;
        while(x--){
            v[a][b]=y;
            if(b!=0&&v[a][b-1]==0)b--;
            else a++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}