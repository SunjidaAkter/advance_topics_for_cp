#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
bool lucky(int x){
 
}
int main(){
    int p;cin>>p;
    int n=p;
    bool flag=true;
    while(n!=0){
        if(n%10!=7&&n%10!=4){
            flag=false;
            break;
        }
        n/=10;
    }
    if(flag)cout<<"YES";
    else {
        if(p%4==0||p%47==0||p%744==0||p%7==0){
            cout<<"YES";
        }else cout<<"NO";    
    }
    return 0;
}