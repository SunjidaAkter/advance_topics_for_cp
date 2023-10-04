#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
        if(((a1-a2)+(b1-b2))<0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}