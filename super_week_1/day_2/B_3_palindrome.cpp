#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    if(n==1)cout<<"a";
    if(n==2)cout<<"aa";
    if(n==3)cout<<"bba";
    if(n==4)cout<<"aabb";
    string ans="";
    if(n>4){
        if(n%4==0){
            for(int i=0;i<n;i+=4){
                ans+="aabb";
            }
            cout<<ans;
        }else{
            for(int i=0;i<n/4;i++){
                ans+="aabb";
            }
            if(n%4==1){
                ans+="a";
            }
            if(n%4==2){
                ans+="aa";
            }
            if(n%4==3){
                ans+="aab";
            }
            cout<<ans;       
        }
    }
    return 0;
}