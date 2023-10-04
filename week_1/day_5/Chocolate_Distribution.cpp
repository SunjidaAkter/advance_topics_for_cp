#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2)cout<<2<<" "<<2<<" "<<n-4<<endl;
        else cout<<1<<" "<<1<<" "<<n-2<<endl;
    }
    return 0;
}