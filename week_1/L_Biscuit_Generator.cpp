#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int a,b,t;
    cin>>a>>b>>t;
    int s=0;
    for(int i=a;i<=t;i+=a){
        s+=b;
    }
    cout<<s;
    return 0;
}