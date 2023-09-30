#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int a,b,c;cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<10000;i++){
        for(int j=0;j<10000;j++){
            if((a*i+b*j)==c){
                flag=true;
                break;
            }
        }
    }
    if(flag)cout<<"Yes";
    else cout<<"No"; 
    return 0;
}