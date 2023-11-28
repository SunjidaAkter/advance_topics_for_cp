#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int test;cin>>test;
    string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int t=1;t<=test;t++){
        int n,k;cin>>n>>k;
        string x,c;
        x=s.substr(0,n);
        c=x;
        cout<<"Case "<<t<<":"<<'\n';
        for(int i=0;i<k;i++){
            cout<<x<<'\n';
            next_permutation(x.begin(),x.end());
            if(x==c)break;
        }
    }
    return 0;
}