#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int a,b,c;cin>>a>>b>>c;
    bool flag=false;int x;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            flag=true;
            x=i;
            break;
        }
    }
    if(flag)cout<<x;
    else cout<<-1;
    return 0;
}