#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int x,y;cin>>x>>y;bool ok=false;
    int a[7]={1,11,111,1111,11111,111111,1111111};
    for(int i=0;i<7;i++){
        if(((x*y)+x+y)==a[i]){
            ok=true;
            break;
        }
    }
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}